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
	PORT (
		CLK : IN STD_LOGIC;
		
		--TX_EN: IN STD_LOGIC;
		TX: OUT STD_LOGIC;
		TX_ACTIVE: OUT STD_LOGIC;
		TX_DONE: OUT STD_LOGIC;
		INPUT_DATA : IN STD_LOGIC_VECTOR(7 downto 0);  
		
		RX: IN STD_LOGIC;
		RX_EN: OUT STD_LOGIC;
		RX_LED: OUT STD_LOGIC;
		OUTPUT_DATA : OUT STD_LOGIC_VECTOR(7 downto 0);
		

		
		INDEX_TX: OUT natural range 0 to 16;
		INDEX_RX: OUT natural range 0 to 16;
		
		LED_DEBUG: OUT STD_LOGIC := '0';
		
		SEGMENTS: OUT STD_LOGIC_VECTOR(6 downto 0);
		SEGMENT_GROUNDS: OUT STD_LOGIC_VECTOR(3 downto 0);
		SEGMENT_DOT: OUT STD_LOGIC;
		
		RESET_BUTTON: IN STD_LOGIC;
		RESET_SECOND_BUTTON: IN STD_LOGIC;
		
		MODE_BUTTON: IN STD_LOGIC;
		SEND_BUTTON: IN STD_LOGIC;
		
		MODE_LED: OUT STD_LOGIC
	);
end MECHANICAL_CLOCK;

architecture Behavioral of MECHANICAL_CLOCK is

	-- UART TX COMPONENT
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

	-- UART RX COMPONENT
	COMPONENT UART_RX
		PORT(
			i_Clk : IN std_logic;
			i_RX_Serial : IN std_logic;          
			o_RX_DV : OUT std_logic;
			o_RX_Byte : OUT std_logic_vector(7 downto 0)
			);
	END COMPONENT;
	
	-- DIV20M_1 COMPONENT
	COMPONENT DIV20M_X
		generic (N : integer);
		PORT(
			i_Clk : IN std_logic;
			i_Reset : IN std_logic;
			o_Newclk : OUT std_logic
			);
	END COMPONENT;
	
	-- BCD_7SEGMENT COMPONENT
	COMPONENT BCD_7SEGMENT
		PORT(
			i_Number : IN std_logic_vector(3 downto 0);          
			o_Segment : OUT std_logic_vector(6 downto 0)
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
	
	-- CLK Hz
	signal r_Clk_1_Hz : STD_LOGIC;
	signal r_Clk_2_Hz : STD_LOGIC;
	signal r_Clk_4_Hz : STD_LOGIC;
	signal r_Clk_1000_Hz : STD_LOGIC;
	
	-- Clock Timing
	signal r_Second: integer range 0 to 60; -- may be change number later
	signal r_Minute: integer range 0 to 60;
	signal r_Hour: integer range 0 to 24;
	
	-- Clock Temp Timing
	signal r_Second_Temp: integer range 0 to 60; -- may be change number later
	signal r_Minute_Temp: integer range 0 to 60;
	signal r_Hour_Temp: integer range 0 to 24;
	
	-- 7 Segments 1 digit (4 bits)
	signal r_Digit : std_logic_vector(3 downto 0);
	signal r_Dot : std_logic;
	
	signal r_Counter_4: integer range 3 downto 0 ;
	signal r_Counter_4_State: std_logic_vector(1 downto 0);
	
	signal r_Reset: std_logic;

	-- MODE
	signal r_Mode: STD_LOGIC := '0';
	-- EDIT MODE
	signal r_Mode_Edit: STD_LOGIC := '0';

begin

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
	
	-- 1 hz
	--Inst_DIV20M_1: DIV20M_X 
	--generic map (N => 20000000 / 1) 
	--PORT MAP(
	--	i_Clk => CLK,
	--	i_Reset => RESET_BUTTON,
	--	o_Newclk => r_Clk_1_Hz
	--);
	
	-- 2 hz
	Inst_DIV20M_2: DIV20M_X 
	generic map (N => 20000000 / 2) 
	PORT MAP(
		i_Clk => CLK,
		i_Reset => r_Reset,
		o_Newclk => r_Clk_2_Hz
	);
	-- 4 hz 
	Inst_DIV20M_4: DIV20M_X  
	generic map (N => 20000000 / 4) 
	PORT MAP(
		i_Clk => CLK,
		i_Reset => r_Reset,
		o_Newclk => r_Clk_4_Hz
	);
	-- 1000 hz
	Inst_DIV20M_1000: DIV20M_X  
	generic map (N => 20000000 / 1000) 
	PORT MAP(
		i_Clk => CLK,
		i_Reset => '0', -- don't need to RESET this 1000 hz
		o_Newclk => r_Clk_1000_Hz
	);
	
	-- 7 Segments
	Inst_BCD_7SEGMENT: BCD_7SEGMENT PORT MAP(
		i_Number => r_Digit,
		o_Segment => SEGMENTS
	);
	
	r_Counter_4_State <= std_logic_vector(to_unsigned(r_Counter_4, r_Counter_4_State'length));
	-- DECODER 7 COMMONS
	p_DECODER4TO1 : process(r_Clk_1000_Hz)
		begin
			if (rising_edge(r_Clk_1000_Hz)) then
				
				 -- NORMAL MODE
				 if(r_Mode = '0') then
					 case r_Counter_4_State is
					 -- second (0)
					 when "00" =>
						  SEGMENT_GROUNDS <= "1110";
						  SEGMENT_DOT <= '0';						  
						  r_Digit <= std_logic_vector(to_unsigned(r_Second mod 10, r_Digit'length));
					 -- second (1)
					 when "01" =>
						  SEGMENT_GROUNDS <= "1101"; 
						  SEGMENT_DOT <= '0';
						  r_Digit <= std_logic_vector(to_unsigned(r_Second / 10, r_Digit'length));
					 -- minute (0)
					 when "10" =>
						  SEGMENT_GROUNDS <= "1011"; 
						  SEGMENT_DOT <= r_Dot;
						  r_Digit <= std_logic_vector(to_unsigned(r_Minute mod 10, r_Digit'length));
					 -- minute (1)
					 when others => -- "11"
						  SEGMENT_GROUNDS <= "0111"; 
						  SEGMENT_DOT <= '0';
						  r_Digit <= std_logic_vector(to_unsigned(r_Minute / 10, r_Digit'length));
					 end case;
				
				-- EDIT MODE
				elsif(r_Mode = '1' and r_Mode_Edit = '0') then
		
					 case r_Counter_4_State is
					 -- second (0)
					 when "00" =>
						  SEGMENT_GROUNDS <= "1110";
						  SEGMENT_DOT <= '0';						  
						  r_Digit <= std_logic_vector(to_unsigned(r_Second_Temp mod 10, r_Digit'length));
					 -- second (1)
					 when "01" =>
						  SEGMENT_GROUNDS <= "1101"; 
						  SEGMENT_DOT <= '0';
						  r_Digit <= std_logic_vector(to_unsigned(r_Second_Temp / 10, r_Digit'length));
					 -- minute (0)
					 when "10" =>
						  SEGMENT_GROUNDS <= "1011"; 
						  SEGMENT_DOT <= r_Dot;
						  r_Digit <= std_logic_vector(to_unsigned(r_Minute_Temp mod 10, r_Digit'length));
					 -- minute (1)
					 when others => -- "11"
						  SEGMENT_GROUNDS <= "0111"; 
						  SEGMENT_DOT <= r_Dot;
						  r_Digit <= std_logic_vector(to_unsigned(r_Minute_Temp / 10, r_Digit'length));
					 end case;
				elsif(r_Mode = '1' and r_Mode_Edit = '1') then
					case r_Counter_4_State is
					 -- second (0)
					 when "00" =>
						  SEGMENT_GROUNDS <= "1110";
						  SEGMENT_DOT <= r_Dot;						  
						  r_Digit <= std_logic_vector(to_unsigned(r_Second_Temp mod 10, r_Digit'length));
					 -- second (1)
					 when "01" =>
						  SEGMENT_GROUNDS <= "1101"; 
						  SEGMENT_DOT <= r_Dot;
						  r_Digit <= std_logic_vector(to_unsigned(r_Second_Temp / 10, r_Digit'length));
					 -- minute (0)
					 when "10" =>
						  SEGMENT_GROUNDS <= "1011"; 
						  SEGMENT_DOT <= '0';
						  r_Digit <= std_logic_vector(to_unsigned(r_Minute_Temp mod 10, r_Digit'length));
					 -- minute (1)
					 when others => -- "11"
						  SEGMENT_GROUNDS <= "0111"; 
						  SEGMENT_DOT <= '0';
						  r_Digit <= std_logic_vector(to_unsigned(r_Minute_Temp / 10, r_Digit'length));
					 end case;
				end if;
			end if;
	end process p_DECODER4TO1;
	
	-- COUNTER 4 for display 7 SEGMENTs
	p_COUNTER4 : process(r_Clk_1000_Hz)
		begin
			if (rising_edge(r_Clk_1000_Hz)) then
			-- Counter 0-3
				r_Counter_4 <= r_Counter_4 + 1;
				if(r_Counter_4 = 3) then
					r_Counter_4 <= 0;
				end if;	
			end if;
	end process p_COUNTER4;
	
	-- PRESS BUTTON STATES
	p_MODE : process(CLK)
		variable s_State : STD_LOGIC := '0';
		begin
			if(rising_edge(CLK)) then
				case s_State is
					when '0' =>
						if (MODE_BUTTON = '1') then
							-- STATE 1 -> 2
							if(r_Mode = '0') then
								r_Mode <= '1';
								r_Mode_Edit <= '0';
							-- STATE 2 - 3 
							elsif(r_Mode = '1') then
								-- STATE 2 -> 3
								if (r_Mode_Edit = '0') then
									r_Mode_Edit <= '1';
								-- STATE 3 -> 1
								elsif (r_Mode_Edit = '1') then
									r_Mode <= '0';
									r_Mode_Edit <= '0';
								end if;
							end if;
							s_State := '1';
						end if;
					when others => -- '1'
						if (MODE_BUTTON = '0') then
							s_State := '0';
						end if;
				end case;
			end if;
	end process p_MODE;
	
		
	-- CALCULATION CLOCK
	p_CALCULATION : process(CLK, r_Clk_1_Hz,r_Clk_2_Hz)
		-- REAL TIME
		variable v_Second: natural range 0 to 60 := 0; -- may be change number later
		variable v_Minute: natural range 0 to 60 := 0;
		variable v_Hour: natural range 0 to 24 := 0;
		-- TEMP TIME
		variable v_Second_Temp: natural range 0 to 60 := 14; -- may be change number later
		variable v_Minute_Temp: natural range 0 to 60 := 25;
		variable v_Hour_Temp: natural range 0 to 24 := 0;
		
		variable v_Init_Edit: STD_LOGIC := '0';
		
		-- DOT BLINK 1/2 Second
		variable v_Dot: STD_LOGIC := '0';
		begin
		
			-- SECOND BLINK 1/2
			if(rising_edge(r_Clk_2_Hz)) then
					v_Dot := not v_Dot;
					r_Clk_1_Hz <= v_Dot;
			end if;
			

			if(rising_edge(CLK)) then
		
				-- SAVE NORMAL TO TEMP
				if (r_Mode = '1' and v_Init_Edit = '0') then --  
					v_Second_Temp := v_Second;
					v_Minute_Temp := v_Minute;
					v_Hour_Temp := v_Hour;
					
					v_Init_Edit := '1';
				elsif(r_Mode = '0' and v_Init_Edit = '1') then
					v_Init_Edit := '0';
				end if;
			
			end if;
			
			if(rising_edge(r_Clk_1_Hz)) then -- if second clock rising
				-- increment 1 second
				v_Second := v_Second + 1;
				
				-- increment 1 minute
				if (v_Second = 60) then
					v_Second := 0;
					v_Minute := v_Minute + 1;
				end if;
				
				-- increment 1 hour
				if (v_Minute = 60) then
					v_Minute := 0;
					v_Hour := v_Hour + 1;
				end if;
				
				-- 23:59:00 to 00:00:00
				if (r_Hour = 24) then
					v_Minute := 0;
					v_Hour := v_Hour + 1;
				end if;
			
			end if;
			
			-- CHECK EVERY RESET PRESS BUTTON
			if(rising_edge(CLK)) then
				-- RESET ALL
				if (RESET_BUTTON = '1' and r_Mode = '1') then
						v_Dot := '0';
						--v_Second := 0;
						--v_Minute := 0;
						--v_Hour := 0;
						
						-- ONLY CHANGE AT TEMP FOR NOW
						v_Second_Temp := 0;
						v_Minute_Temp := 0;
						v_Hour_Temp := 0;
				end if;
				
				-- RESET ONLY SECOND TO ZERO
				if (RESET_SECOND_BUTTON = '1' and r_Mode = '1') then
						v_Dot := '0';
						--v_Second := 0;
						
						-- ONLY CHANGE AT TEMP FOR NOW
						v_Second_Temp := 0;
				end if;
			end if;
			
		
			
			-- MAPPING REAL TIME
			r_Second <= v_Second;
			r_Minute <= v_Minute;
			r_Hour <= v_Hour;
			-- MAPPING TEMP TIME
			r_Second_Temp <= v_Second_Temp;
			r_Minute_Temp <= v_Minute_Temp;
			r_Hour_Temp <= v_Hour_Temp;
			
			-- MAPPING DOT
			r_Dot <= v_Dot;
	end process p_CALCULATION;
  
  
  
	-- UART SECTION
	-- BELOW
  
  
  
	-- UART TX ALL
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

	-- UART RX ALL
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
						r_Payload_RX(r_Index_RX) <= r_Output_Byte; -- assign Output Byte to Payload (1 byte only at a time)
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
	
	-- RESET
	r_Reset <= (RESET_BUTTON or RESET_SECOND_BUTTON) and r_Mode;
	
	-- MODE LED
	MODE_LED <= r_Mode;
		
	-- TX signal update
	TX_ACTIVE <= r_TX_ACTIVE;
	TX_DONE <= r_TX_DONE;
	INDEX_TX <= r_Index_TX;
	
	-- RX signal update
	OUTPUT_DATA <= r_Payload_RX(to_integer(signed(INPUT_DATA))); -- test by switch
	RX_EN <= r_RX_DONE;
	INDEX_RX <= r_Index_RX;
	RX_LED <= RX;


end Behavioral;

