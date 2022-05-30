--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:30:31 05/26/2022
-- Design Name:   
-- Module Name:   C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock/MECHANICAL_CLOCK_tb3.vhd
-- Project Name:  Mechanical_clock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MECHANICAL_CLOCK
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY MECHANICAL_CLOCK_tb3 IS
END MECHANICAL_CLOCK_tb3;
 
ARCHITECTURE behavior OF MECHANICAL_CLOCK_tb3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MECHANICAL_CLOCK
    PORT(
         CLK : IN  std_logic;
         TX : OUT  std_logic;
         TX_ACTIVE : OUT  std_logic;
         TX_DONE : OUT  std_logic;
         INPUT_DATA : IN  std_logic_vector(7 downto 0);
         RX : IN  std_logic;
         RX_EN : OUT  std_logic;
         RX_LED : OUT  std_logic;
         OUTPUT_DATA : OUT  std_logic_vector(7 downto 0);
         --INDEX_TX : OUT  std_logic_vector(0 to 3);
         --INDEX_RX : OUT  std_logic_vector(0 to 3);
			
			INDEX_TX: OUT natural range 0 to 8; -- change from 1 to 16
			INDEX_RX: OUT natural range 0 to 8;
			
			
         --LED_DEBUG : OUT  std_logic;
         SEGMENTS : OUT  std_logic_vector(6 downto 0);
         SEGMENT_GROUNDS : OUT  std_logic_vector(3 downto 0);
         SEGMENT_DOT : OUT  std_logic;
         RESET_BUTTON : IN  std_logic;
         RESET_SECOND_BUTTON : IN  std_logic;
         MODE_BUTTON : IN  std_logic;
         SEND_BUTTON : IN  std_logic;
         MINUS_BUTTON : IN  std_logic;
         PLUS_BUTTON : IN  std_logic;
         MODE_LED : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal INPUT_DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal RX : std_logic := '0';
   signal RESET_BUTTON : std_logic := '0';
   signal RESET_SECOND_BUTTON : std_logic := '0';
   signal MODE_BUTTON : std_logic := '0';
   signal SEND_BUTTON : std_logic := '0';
   signal MINUS_BUTTON : std_logic := '0';
   signal PLUS_BUTTON : std_logic := '0';

 	--Outputs
   signal TX : std_logic;
   signal TX_ACTIVE : std_logic;
   signal TX_DONE : std_logic;
   signal RX_EN : std_logic;
   signal RX_LED : std_logic;
   signal OUTPUT_DATA : std_logic_vector(7 downto 0);
   --signal INDEX_TX : std_logic_vector(0 to 3);
   --signal INDEX_RX : std_logic_vector(0 to 3);
	signal INDEX_TX: natural range 0 to 8;
	signal INDEX_RX: natural range 0 to 8;
	
	
   signal LED_DEBUG : std_logic;
   signal SEGMENTS : std_logic_vector(6 downto 0);
   signal SEGMENT_GROUNDS : std_logic_vector(3 downto 0);
   signal SEGMENT_DOT : std_logic;
   signal MODE_LED : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MECHANICAL_CLOCK PORT MAP (
          CLK => CLK,
          TX => TX,
          TX_ACTIVE => TX_ACTIVE,
          TX_DONE => TX_DONE,
          INPUT_DATA => INPUT_DATA,
          RX => RX,
          RX_EN => RX_EN,
          RX_LED => RX_LED,
          OUTPUT_DATA => OUTPUT_DATA,
          INDEX_TX => INDEX_TX,
          INDEX_RX => INDEX_RX,
          --LED_DEBUG => LED_DEBUG,
          SEGMENTS => SEGMENTS,
          SEGMENT_GROUNDS => SEGMENT_GROUNDS,
          SEGMENT_DOT => SEGMENT_DOT,
          RESET_BUTTON => RESET_BUTTON,
          RESET_SECOND_BUTTON => RESET_SECOND_BUTTON,
          MODE_BUTTON => MODE_BUTTON,
          SEND_BUTTON => SEND_BUTTON,
          MINUS_BUTTON => MINUS_BUTTON,
          PLUS_BUTTON => PLUS_BUTTON,
          MODE_LED => MODE_LED
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.

		SEND_BUTTON <= '1';  
      -- insert stimulus here  
		wait for 200 us;
		SEND_BUTTON <= '0';
      wait for 10000 ms;			
      --wait for CLK_period*10;

      -- insert stimulus here 

      --wait;
   end process;

END;
