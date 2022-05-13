----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:21:15 05/09/2022 
-- Design Name: 
-- Module Name:    MECHANICAL_CLOCK - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MECHANICAL_CLOCK is
	generic (
    g_CLKS_PER_BIT : integer := 174     -- Needs to be set correctly
    );
	PORT (
		CLK : IN STD_LOGIC;
		
		--TX_EN: IN STD_LOGIC;
		TX: OUT STD_LOGIC;
		TX_ACTIVE: OUT STD_LOGIC;
		TX_DONE: OUT STD_LOGIC;
		INPUT_DATA : IN STD_LOGIC_VECTOR(7 downto 0);  
		
		RX: IN STD_LOGIC;
		RX_EN: OUT STD_LOGIC;
		OUTPUT_DATA : OUT STD_LOGIC_VECTOR(7 downto 0);
		
		SEND_BUTTON: IN STD_LOGIC;
		
		INDEX_TX: OUT natural range 0 to 16;
		INDEX_RX: OUT natural range 0 to 16
	);
end MECHANICAL_CLOCK;

architecture Behavioral of MECHANICAL_CLOCK is
	COMPONENT UART_TX
	PORT(
		i_Clk : IN STD_LOGIC;
		i_TX_DV : IN STD_LOGIC;
		i_TX_Byte : IN STD_LOGIC_VECTOR(7 downto 0);          
		o_TX_Active : OUT STD_LOGIC;
		o_TX_Serial : OUT STD_LOGIC;
		o_TX_Done : OUT STD_LOGIC
		);
	END COMPONENT;
	
	--signal FIX_DATA : STD_LOGIC_VECTOR(7 downto 0) := "01000001";

	COMPONENT UART_RX
	PORT(
		i_Clk : IN std_logic;
		i_RX_Serial : IN std_logic;          
		o_RX_DV : OUT std_logic;
		o_RX_Byte : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
	
	-- Payload
	type t_Payload is array (0 to 16) of STD_LOGIC_VECTOR(7 downto 0);
	signal r_Payload_TX : t_Payload := (others => "00110000"); -- zero in hex is 0x30
	signal r_Payload_RX : t_Payload := (others => "00110000"); -- zero in hex is 0x30
	
	-- TX
	signal r_Input_Byte : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
	signal r_Index_TX : natural range 0 to 16 := 0;
	signal r_TX_EN: STD_LOGIC := '0';
	signal r_TX_ACTIVE : STD_LOGIC := '0';
	signal r_TX_DONE : STD_LOGIC := '0';
	
	type t_Main_TX is (s_Idle_TX, s_Start_TX, s_Get_TX, s_Send_TX);
	signal r_Main_TX : t_Main_TX := s_Idle_TX;
	signal r_Is_Send : STD_LOGIC := '0';
	
	-- RX
	signal r_Output_Byte : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
	signal r_RX_DONE: STD_LOGIC := '0';
	signal r_Index_RX : natural range 0 to 16 := 0;
	
	type t_Main_RX is (s_Idle_RX, s_Receive_RX, s_Done_RX);
	signal r_Main_RX : t_Main_RX := s_Idle_RX;

begin
  
	p_SEND_DATA : process(CLK)
		begin
			if rising_edge (CLK) then -- rising_edge clock every 50 ns (20MHz)
				case r_Main_TX is -- switch case 
					when s_Idle_TX => -- case Idle  
						if SEND_BUTTON = '1' then -- check if button is click
							if r_Is_Send = '0' then -- if never send something
								r_Main_TX <= s_Get_TX; -- skip to Get state (starting first loop)
								r_Is_Send <= '1';
							else -- if already send something
								r_Main_TX <= s_Idle_TX; -- loop, don't send more than 2 times
							end if;
						else
							r_Is_Send <= '0'; -- reset button state
							r_Main_TX <= s_Idle_TX;
						end if;
						
					when s_Start_TX => -- case Start (Start of Loop Sending 17 bytes)
						if (r_TX_ACTIVE = '1' and r_TX_DONE = '1') then -- if finish transmition step 1
							r_Main_TX <= s_Get_TX;
						elsif r_TX_EN = '1' then
							r_Main_TX <= s_Start_TX;
							r_TX_EN <= '0'; -- back to false and wait for next send tricker
						else
							r_Main_TX <= s_Start_TX;
						end if;
						
					when s_Get_TX => -- case Get (assign value to payload 17 bytes)
						r_Payload_TX(0) <= x"41"; --A
						r_Payload_TX(1) <= x"42"; --B
						r_Payload_TX(2) <= x"43"; --C
						r_Payload_TX(3) <= x"44"; --D
						r_Payload_TX(4) <= x"45"; --E
						r_Payload_TX(5) <= x"46"; --F
						r_Payload_TX(6) <= x"47"; --G
						r_Payload_TX(7) <= x"48"; --H
						r_Payload_TX(8) <= x"49"; --I
						r_Payload_TX(9) <= x"4A"; --J
						r_Payload_TX(10) <= x"4B"; --K
						r_Payload_TX(11) <= x"4C"; --L
						r_Payload_TX(12) <= x"4D"; --M
						r_Payload_TX(13) <= x"4E"; --N
						r_Payload_TX(14) <= "01010011"; --S
						r_Payload_TX(15) <= "01000101"; --E
						r_Payload_TX(16) <= "01000111"; --G
						r_Main_TX <= s_Send_TX;
						if r_TX_ACTIVE = '0' and r_TX_DONE = '1' then -- if finish transmition step 2
							if r_Index_TX < 16 then -- during 17 bytes
								r_Index_TX <= r_Index_TX + 1; -- increment + 1
							else
								r_index_TX <= 0; -- reset index
								r_Main_TX <= s_Idle_TX; -- finish 17 bytes (Real End of Loop Sending 17 bytes)
							end if;
						end if;
						
					when s_Send_TX => -- case Send
						r_TX_EN <= '1'; -- tricker Uart to start sending 1 byte at a time
						r_Main_TX <= s_Start_TX; -- back to start for loop
						r_Input_Byte <= r_Payload_TX(r_Index_TX); -- assign value to Input Byte (1 byte only at a time)
						
					when others => -- default case
						r_Main_TX <= s_Idle_TX;
				end case;	
					
			end if;
	end process p_SEND_DATA;

	p_RECEIVE_DATA : process(CLK)
		begin
			if rising_edge (CLK) then -- rising_edge clock every 50 ns (20MHz)
				case r_Main_RX is -- switch case 
					when s_Idle_RX => -- case Idle
						if RX = '0' then
							r_Main_RX <= s_Receive_RX;
						else
							r_Main_RX <= s_Idle_RX; -- stay idle
						end if;
					
					when s_Receive_RX => -- case Receive
						if r_RX_DONE = '1' then
						
							r_Main_RX <= s_Done_RX; -- receive done
						else
							r_Main_RX <= s_Receive_RX; -- waiting
						end if;
							
					when s_Done_RX =>
						r_Payload_RX(r_Index_TX) <= r_Output_Byte; -- assign Output Byte to Payload (1 byte only at a time)
						if r_Index_RX < 16 then -- during 17 bytes
							r_Index_RX <= r_Index_RX + 1; -- increment + 1
						else
							r_index_RX <= 0; -- reset index
						end if;
						r_Main_RX <= s_Idle_RX; -- go back to idle for get start bit (RX) as 0
					
					when others => -- default case
						r_Main_RX <= s_Idle_RX;
				end case;
			
			end if;
	end process p_RECEIVE_DATA;

	Inst_UART_TX: UART_TX PORT MAP(
			i_Clk => CLK,
			i_TX_DV => r_TX_EN,
			i_TX_Byte => r_Input_Byte, 
			o_TX_Active => r_TX_ACTIVE,
			o_TX_Serial => TX,
			o_TX_Done => r_TX_DONE
		);
	
	Inst_UART_RX: UART_RX PORT MAP(
		i_Clk => CLK,
		i_RX_Serial => RX,
		o_RX_DV => r_RX_DONE,
		o_RX_Byte =>  r_Output_Byte
	);
		
	-- TX signal update
	TX_ACTIVE <= r_TX_ACTIVE;
	TX_DONE <= r_TX_DONE;
	INDEX_TX <= r_Index_TX;
	
	-- RX signal update
	OUTPUT_DATA <= r_Payload_RX(to_integer(signed(INPUT_DATA))); -- test by switch
	RX_EN <= r_RX_DONE;
	INDEX_RX <= r_Index_RX;


end Behavioral;

