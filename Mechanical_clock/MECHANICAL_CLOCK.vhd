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
--use IEEE.NUMERIC_STD.ALL;

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
		
		INDEX_TX: OUT natural range 0 to 16
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
	
	type t_Payload is array (0 to 16) of STD_LOGIC_VECTOR(7 downto 0);
	signal r_Payload : t_Payload := (others => "00110000"); -- zero in hex is 0x30
	signal r_Input_Byte : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
	signal r_index_TX : natural range 0 to 16 := 0;
	signal r_TX_EN: STD_LOGIC := '0';
	signal r_TX_ACTIVE : STD_LOGIC := '0';
	signal r_TX_DONE : STD_LOGIC := '0';
	
	type t_Main is (s_Idle, s_Start,s_Get, s_Send);
	signal r_Main : t_Main := s_Idle;
	
	signal r_Is_Send : STD_LOGIC := '0';

begin
  
	p_SEND_DATA : process(CLK)
		begin
			if rising_edge (CLK) then -- rising_edge clock every 50 ns (20MHz)
				case r_Main is -- switch case 
					when s_Idle => -- case Idle  
						if SEND_BUTTON = '1' then -- check if button is click
							if r_Is_Send = '0' then -- if never send something
								r_Main <= s_Get; -- skip to Get state (starting first loop)
								r_Is_Send <= '1';
							else -- if already send something
								r_Main <= s_Idle; -- loop, don't send more than 2 times
							end if;
						else
							r_Is_Send <= '0'; -- reset button state
							r_Main <= s_Idle;
						end if;
						
					when s_Start => -- case Start (Start of Loop Sending 17 bytes)
						if (r_TX_ACTIVE = '1' and r_TX_DONE = '1') then -- if finish transmition
							r_Main <= s_Get;
						elsif r_TX_EN = '1' then
							r_Main <= s_Start;
							r_TX_EN <= '0'; -- back to false and wait for next send tricker
						else
							r_Main <= s_Start;
						end if;
						
					when s_Get => -- case Get (assign value to payload 17 bytes)
						r_Payload(0) <= x"41"; --A
						r_Payload(10) <= x"41"; --A
						r_Payload(11) <= x"42"; --B
						r_Payload(12) <= x"43"; --C
						r_Payload(13) <= x"44"; --D
						r_Payload(14) <= "01010011"; --S
						r_Payload(15) <= "01000101"; --E
						r_Payload(16) <= "01000111"; --G
						r_Main <= s_Send;
						if r_TX_ACTIVE = '0' and r_TX_DONE = '1' then -- if finish transmition
							if r_index_TX < 16 then -- during 17 bytes
								r_index_TX <= r_index_TX + 1; -- increment + 1
							else
								r_index_TX <= 0; -- reset index
								r_Main <= s_Idle; -- finish 17 bytes (Real End of Loop Sending 17 bytes)
							end if;
						end if;
						
					when s_Send => -- case Send
						r_TX_EN <= '1'; -- tricker Uart to start sending 1 byte at a time
						r_Main <= s_Start; -- back to start for loop
						r_Input_Byte <= r_Payload(r_index_TX); -- assign value to Input Byte (1 byte only at a time)
						
					when others => -- default case
						r_Main <= s_Idle;
				end case;	
					
			end if;
	end process p_SEND_DATA;

	

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
		o_RX_DV => RX_EN,
		o_RX_Byte =>  OUTPUT_DATA
	);
	
			
	TX_ACTIVE <= r_TX_ACTIVE;
	TX_DONE <= r_TX_DONE;
	INDEX_TX <= r_index_TX;


end Behavioral;

