----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:08:48 05/20/2022 
-- Design Name: 
-- Module Name:    DIV20M_1 - Behavioral 
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

entity DIV20M_X is
	 generic (
		N : integer := 20000000 -- 1 hz
    );
    PORT ( i_Clk : in  STD_LOGIC;
			  i_Reset: in STD_LOGIC;
           o_Newclk : out  STD_LOGIC);
end DIV20M_X;

architecture Behavioral of DIV20M_X is
	 signal r_Clk_count : integer range 0 to 10000000;
	 signal r_Clk: STD_LOGIC;
begin

	Clock_divider: process(i_clk)
	begin
		if(rising_edge(i_clk)) then
			-- 1 SEC
			r_Clk_Count <= r_Clk_Count + 1;
			if(r_Clk_Count = (N/2) - 1) then
				r_Clk <= not r_Clk;
				r_Clk_Count <= 0;
			end if;
			
			-- RESET CLOCK COUNT
			if(i_Reset = '1') then
				r_Clk_Count <= 0;
				r_Clk <= '0';
			end if;
			
		end if;
	end process Clock_divider;
	
	o_Newclk <= r_Clk;

end Behavioral;

