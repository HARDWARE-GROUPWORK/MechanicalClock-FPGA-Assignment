
-- VHDL Instantiation Created from source file BCD_7SEGMENT.vhd -- 16:15:39 05/20/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT BCD_7SEGMENT
	PORT(
		i_Number : IN std_logic_vector(3 downto 0);          
		o_Segment : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;

	Inst_BCD_7SEGMENT: BCD_7SEGMENT PORT MAP(
		i_Number => ,
		o_Segment => 
	);


