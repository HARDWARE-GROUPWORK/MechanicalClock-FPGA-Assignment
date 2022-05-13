--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   05:08:25 05/10/2022
-- Design Name:   
-- Module Name:   C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock/MECHANICAL_CLOCK_tb.vhd
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
USE ieee.numeric_std.ALL;
 
ENTITY MECHANICAL_CLOCK_tb IS
END MECHANICAL_CLOCK_tb;
 
ARCHITECTURE behavior OF MECHANICAL_CLOCK_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MECHANICAL_CLOCK
    PORT(
         CLK : IN  std_logic;
         --TX_EN : IN  std_logic;
         TX : OUT  std_logic;
         TX_ACTIVE : OUT  std_logic;
         TX_DONE : OUT  std_logic;
         INPUT_DATA : IN  std_logic_vector(7 downto 0);
         RX : IN  std_logic;
         RX_EN : OUT  std_logic;
         OUTPUT_DATA : OUT  std_logic_vector(7 downto 0);
         SEND_BUTTON : IN  std_logic;
			INDEX_TX: OUT natural range 0 to 16; -- change from 1 to 16
			INDEX_RX: OUT natural range 0 to 16
        ); 
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   --signal TX_EN : std_logic := '0';
   signal INPUT_DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal RX : std_logic := '0';
   signal SEND_BUTTON : std_logic := '0'; 

 	--Outputs
   signal TX : std_logic;  
   signal TX_ACTIVE : std_logic; 
   signal TX_DONE : std_logic; 
   signal RX_EN : std_logic;
   signal OUTPUT_DATA : std_logic_vector(7 downto 0);
	signal INDEX_TX: natural range 0 to 16;
	signal INDEX_RX: natural range 0 to 16;
	

   -- Clock period definitions
   constant CLK_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MECHANICAL_CLOCK PORT MAP (
          CLK => CLK,
          --TX_EN => TX_EN,
          TX => TX,
          TX_ACTIVE => TX_ACTIVE,
          TX_DONE => TX_DONE,
          INPUT_DATA => INPUT_DATA,
          RX => RX,
          RX_EN => RX_EN,
          OUTPUT_DATA => OUTPUT_DATA,
          SEND_BUTTON => SEND_BUTTON,
			 INDEX_TX => INDEX_TX,
			 INDEX_RX => INDEX_RX
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
      --wait for 100 ns;	

      --wait for CLK_period*10;
		wait for 20 ms;   

		SEND_BUTTON <= '1';  
      -- insert stimulus here  
		wait for 200 us;
		SEND_BUTTON <= '0'; 
		
		wait for 20 ms;
		
		SEND_BUTTON <= '1';  
      -- insert stimulus here  
		wait for 200 us;
		SEND_BUTTON <= '0';  

		wait for 200 us;
		


      wait;
   end process;
	
	stim_proc2: process
	variable mock_data : std_logic_vector(7 downto 0) := (others => '0');
	variable onebit : std_logic := '0'; 
	begin
		
		RX <= '1';
		wait for 20 ms; 
	
		wait for 0.225 us;
		
		-- first start bit
		
		for I in 0 to 16 loop
			mock_data := std_logic_vector(to_unsigned(I, mock_data'length));
		
			RX <= '0';
			wait for 8.7 us;
			-- 8 bits
			RX <= mock_data(0);
			wait for 8.7 us;
			RX <= mock_data(1);
			wait for 8.7 us;
			RX <= mock_data(2);
			wait for 8.7 us;
			RX <= mock_data(3);
			wait for 8.7 us;
			RX <= mock_data(4);
			wait for 8.7 us;
			RX <= mock_data(5);
			wait for 8.7 us;
			RX <= mock_data(6);
			wait for 8.7 us;
			RX <= mock_data(7);
			wait for 8.7 us;
			-- stop bit
			RX <= '1';
			wait for 8.7 us;
		end loop;
		
		wait for 87 us;
		wait;
	end process;

END;
