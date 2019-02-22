--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: top_level_sub_synthesis.vhd
-- /___/   /\     Timestamp: Fri Feb 22 12:46:43 2019
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm top_level_sub -w -dir netgen/synthesis -ofmt vhdl -sim top_level_sub.ngc top_level_sub_synthesis.vhd 
-- Device	: xc6slx4-3-tqg144
-- Input file	: top_level_sub.ngc
-- Output file	: /home/luigiferrettino/Desktop/subtractor_s_8/netgen/synthesis/top_level_sub_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: top_level_sub
-- Xilinx	: /opt/Xilinx/14.7/ISE_DS/ISE/
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------


-- synthesis translate_off
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity top_level_sub is
  port (
    clk : in STD_LOGIC := 'X'; 
    ce : in STD_LOGIC := 'X'; 
    a : in STD_LOGIC_VECTOR ( 7 downto 0 ); 
    b : in STD_LOGIC_VECTOR ( 7 downto 0 ); 
    s : out STD_LOGIC_VECTOR ( 7 downto 0 ) 
  );
end top_level_sub;

architecture Structure of top_level_sub is
  component sub_core
    port (
      clk : in STD_LOGIC := 'X'; 
      ce : in STD_LOGIC := 'X'; 
      a : in STD_LOGIC_VECTOR ( 7 downto 0 ); 
      b : in STD_LOGIC_VECTOR ( 7 downto 0 ); 
      s : out STD_LOGIC_VECTOR ( 7 downto 0 ) 
    );
  end component;
  signal a_7_IBUF_0 : STD_LOGIC; 
  signal a_6_IBUF_1 : STD_LOGIC; 
  signal a_5_IBUF_2 : STD_LOGIC; 
  signal a_4_IBUF_3 : STD_LOGIC; 
  signal a_3_IBUF_4 : STD_LOGIC; 
  signal a_2_IBUF_5 : STD_LOGIC; 
  signal a_1_IBUF_6 : STD_LOGIC; 
  signal a_0_IBUF_7 : STD_LOGIC; 
  signal b_7_IBUF_8 : STD_LOGIC; 
  signal b_6_IBUF_9 : STD_LOGIC; 
  signal b_5_IBUF_10 : STD_LOGIC; 
  signal b_4_IBUF_11 : STD_LOGIC; 
  signal b_3_IBUF_12 : STD_LOGIC; 
  signal b_2_IBUF_13 : STD_LOGIC; 
  signal b_1_IBUF_14 : STD_LOGIC; 
  signal b_0_IBUF_15 : STD_LOGIC; 
  signal clk_BUFGP_16 : STD_LOGIC; 
  signal ce_IBUF_17 : STD_LOGIC; 
  signal s_7_OBUF_18 : STD_LOGIC; 
  signal s_6_OBUF_19 : STD_LOGIC; 
  signal s_5_OBUF_20 : STD_LOGIC; 
  signal s_4_OBUF_21 : STD_LOGIC; 
  signal s_3_OBUF_22 : STD_LOGIC; 
  signal s_2_OBUF_23 : STD_LOGIC; 
  signal s_1_OBUF_24 : STD_LOGIC; 
  signal s_0_OBUF_25 : STD_LOGIC; 
begin
  a_7_IBUF : IBUF
    port map (
      I => a(7),
      O => a_7_IBUF_0
    );
  a_6_IBUF : IBUF
    port map (
      I => a(6),
      O => a_6_IBUF_1
    );
  a_5_IBUF : IBUF
    port map (
      I => a(5),
      O => a_5_IBUF_2
    );
  a_4_IBUF : IBUF
    port map (
      I => a(4),
      O => a_4_IBUF_3
    );
  a_3_IBUF : IBUF
    port map (
      I => a(3),
      O => a_3_IBUF_4
    );
  a_2_IBUF : IBUF
    port map (
      I => a(2),
      O => a_2_IBUF_5
    );
  a_1_IBUF : IBUF
    port map (
      I => a(1),
      O => a_1_IBUF_6
    );
  a_0_IBUF : IBUF
    port map (
      I => a(0),
      O => a_0_IBUF_7
    );
  b_7_IBUF : IBUF
    port map (
      I => b(7),
      O => b_7_IBUF_8
    );
  b_6_IBUF : IBUF
    port map (
      I => b(6),
      O => b_6_IBUF_9
    );
  b_5_IBUF : IBUF
    port map (
      I => b(5),
      O => b_5_IBUF_10
    );
  b_4_IBUF : IBUF
    port map (
      I => b(4),
      O => b_4_IBUF_11
    );
  b_3_IBUF : IBUF
    port map (
      I => b(3),
      O => b_3_IBUF_12
    );
  b_2_IBUF : IBUF
    port map (
      I => b(2),
      O => b_2_IBUF_13
    );
  b_1_IBUF : IBUF
    port map (
      I => b(1),
      O => b_1_IBUF_14
    );
  b_0_IBUF : IBUF
    port map (
      I => b(0),
      O => b_0_IBUF_15
    );
  ce_IBUF : IBUF
    port map (
      I => ce,
      O => ce_IBUF_17
    );
  s_7_OBUF : OBUF
    port map (
      I => s_7_OBUF_18,
      O => s(7)
    );
  s_6_OBUF : OBUF
    port map (
      I => s_6_OBUF_19,
      O => s(6)
    );
  s_5_OBUF : OBUF
    port map (
      I => s_5_OBUF_20,
      O => s(5)
    );
  s_4_OBUF : OBUF
    port map (
      I => s_4_OBUF_21,
      O => s(4)
    );
  s_3_OBUF : OBUF
    port map (
      I => s_3_OBUF_22,
      O => s(3)
    );
  s_2_OBUF : OBUF
    port map (
      I => s_2_OBUF_23,
      O => s(2)
    );
  s_1_OBUF : OBUF
    port map (
      I => s_1_OBUF_24,
      O => s(1)
    );
  s_0_OBUF : OBUF
    port map (
      I => s_0_OBUF_25,
      O => s(0)
    );
  clk_BUFGP : BUFGP
    port map (
      I => clk,
      O => clk_BUFGP_16
    );
  U1 : sub_core
    port map (
      clk => clk_BUFGP_16,
      ce => ce_IBUF_17,
      a(7) => a_7_IBUF_0,
      a(6) => a_6_IBUF_1,
      a(5) => a_5_IBUF_2,
      a(4) => a_4_IBUF_3,
      a(3) => a_3_IBUF_4,
      a(2) => a_2_IBUF_5,
      a(1) => a_1_IBUF_6,
      a(0) => a_0_IBUF_7,
      b(7) => b_7_IBUF_8,
      b(6) => b_6_IBUF_9,
      b(5) => b_5_IBUF_10,
      b(4) => b_4_IBUF_11,
      b(3) => b_3_IBUF_12,
      b(2) => b_2_IBUF_13,
      b(1) => b_1_IBUF_14,
      b(0) => b_0_IBUF_15,
      s(7) => s_7_OBUF_18,
      s(6) => s_6_OBUF_19,
      s(5) => s_5_OBUF_20,
      s(4) => s_4_OBUF_21,
      s(3) => s_3_OBUF_22,
      s(2) => s_2_OBUF_23,
      s(1) => s_1_OBUF_24,
      s(0) => s_0_OBUF_25
    );

end Structure;

-- synthesis translate_on
