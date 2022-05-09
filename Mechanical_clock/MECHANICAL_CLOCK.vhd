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
	PORT (
		CLK : IN STD_LOGIC;
		TX_EN: IN STD_LOGIC;
		TX: OUT STD_LOGIC;
		TX_ACTIVE: OUT STD_LOGIC;
		TX_DONE: OUT STD_LOGIC;
		INPUT_DATA : IN STD_LOGIC_VECTOR(7 downto 0);  
		RX: IN STD_LOGIC;
		RX_EN: OUT STD_LOGIC;
		OUTPUT_DATA : OUT STD_LOGIC_VECTOR(7 downto 0)
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

begin
	Inst_UART_TX: UART_TX PORT MAP(
		i_Clk => CLK,
		i_TX_DV => TX_EN,
		i_TX_Byte => INPUT_DATA,
		o_TX_Active => TX_ACTIVE,
		o_TX_Serial => TX,
		o_TX_Done => TX_DONE
	);
	
	Inst_UART_RX: UART_RX PORT MAP(
		i_Clk => CLK,
		i_RX_Serial => RX,
		o_RX_DV => RX_EN,
		o_RX_Byte =>  OUTPUT_DATA
	);

end Behavioral;

