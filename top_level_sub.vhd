--------------------------------------------------------------------------------
-- Company: Politecnico di Torino
-- Engineer: Luigi Ferrettino S254300
--
-- Create Date:   19:01:24 02/09/2019
-- Design Name:   subtractor_s_8
-- Module Name:   top_level_sub.vhd
-- Project Name:  subtractor_s_8
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


-- Entity definition
entity top_level_sub is
	PORT (
    a : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
end top_level_sub;


architecture Behavioral of top_level_sub is


COMPONENT sub_core
  PORT (
    a : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
END COMPONENT;


begin


-- Instantiate the IPcore
U1 : sub_core
  PORT MAP (
    a => a,
    b => b,
    clk => clk,
    ce => ce,
    s => s
  );


end Behavioral;

