----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:37:22 05/20/2022 
-- Design Name: 
-- Module Name:    BCD_7SEGMENT - Behavioral 
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

entity BCD_7SEGMENT is
    Port ( i_Number : in  STD_LOGIC_VECTOR (3 downto 0);
           o_Segment : out  STD_LOGIC_VECTOR (6 downto 0));
end BCD_7SEGMENT;

architecture Behavioral of BCD_7SEGMENT is
	type t_BCD is array (9 downto 0) of std_logic_vector(6 downto 0);
											-- gfedcba   gfedcba
	constant BCD_NUMBER : t_BCD := ("1101111","1111111",  --9,8 
											  "0000111","1111101",  --7,6
											  "1101101","1100110",  --5,4
											  "1001111","1011011",  --3,2
											  "0000110","0111111"); --1,0
	signal N : integer range 9 downto 0;
begin
	N <= to_integer( unsigned(i_number));
	o_Segment <= BCD_NUMBER(N);
end Behavioral;

