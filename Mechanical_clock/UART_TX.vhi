
-- VHDL Instantiation Created from source file UART_TX.vhd -- 15:29:43 05/09/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT UART_TX
	PORT(
		i_Clk : IN std_logic;
		i_TX_DV : IN std_logic;
		i_TX_Byte : IN std_logic_vector(7 downto 0);          
		o_TX_Active : OUT std_logic;
		o_TX_Serial : OUT std_logic;
		o_TX_Done : OUT std_logic
		);
	END COMPONENT;

	Inst_UART_TX: UART_TX PORT MAP(
		i_Clk => ,
		i_TX_DV => ,
		i_TX_Byte => ,
		o_TX_Active => ,
		o_TX_Serial => ,
		o_TX_Done => 
	);


