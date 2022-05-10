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
		
		TX_EN: IN STD_LOGIC;
		TX: OUT STD_LOGIC;
		TX_ACTIVE: OUT STD_LOGIC;
		TX_DONE: OUT STD_LOGIC;
		INPUT_DATA : IN STD_LOGIC_VECTOR(7 downto 0);  
		
		RX: IN STD_LOGIC;
		RX_EN: OUT STD_LOGIC;
		OUTPUT_DATA : OUT STD_LOGIC_VECTOR(7 downto 0);
		
		SEND_BUTTON: IN STD_LOGIC;
		
		INDEX_TX: OUT natural range 0 to 16;
		IS_SEND: OUT STD_LOGIC
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
	signal r_Payload : t_Payload := (others => (others => '0'));
	signal r_Input_Byte : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
	signal r_is_Send : STD_LOGIC := '0'; -- use SEND_BUTTON to tricker is_Send to be '1' and when data finish (no more data) -> '0';
	signal r_index_TX : natural range 0 to 16 := 0;
	signal r_TX_ACTIVE : STD_LOGIC := '0';
	signal r_TX_DONE : STD_LOGIC := '0';

begin

	--p_CHECK_SEND_DATA : process(SEND_BUTTON)
		--begin

	--end process p_CHECK_SEND_DATA;
				

	p_SEND_DATA : process(SEND_BUTTON, CLK)
		begin
				r_Payload(10) <= "00000001";
				r_Payload(11) <= "00000011";
				r_Payload(12) <= "00000111";
				r_Payload(13) <= "00001111";
				
			if rising_edge (SEND_BUTTON) then
				r_is_Send <= '1';
			end if;
			
			if rising_edge (CLK) then
				if r_is_Send = '1' then
					
					r_Payload(14) <= "01010011"; --S
					r_Payload(15) <= "01000101"; --E
					r_Payload(16) <= "01000111"; --G
					if r_TX_ACTIVE = '0' and r_TX_DONE = '1' then
						if r_index_TX < 16 then -- may error;
							r_index_TX <= r_index_TX + 1;
						else
							r_index_TX <= 0;
							r_is_Send <= '0';
						end if;
					end if;
				end if;
			end if;
	end process p_SEND_DATA;

	

	Inst_UART_TX: UART_TX PORT MAP(
			i_Clk => CLK,
			i_TX_DV => r_is_Send,
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
	IS_SEND <= r_is_Send;
	r_Input_Byte <= r_Payload(r_index_TX);

end Behavioral;

