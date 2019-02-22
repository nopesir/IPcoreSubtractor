--------------------------------------------------------------------------------
-- Company: Politecnico di Torino
-- Engineer: Luigi Ferrettino S254300
--
-- Create Date:   20:39:22 02/09/2019
-- Design Name:   top_level_sub
-- Module Name:   top_level_sub_tb.vhd
-- Project Name:  subtractor_s_8  
-- 
-- VHDL Test Bench for module: top_level_sub
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE std.textio.ALL; 
USE ieee.std_logic_textio.ALL;

 
ENTITY top_level_sub_tb IS
END top_level_sub_tb;
 
ARCHITECTURE behavior OF top_level_sub_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_level_sub
    PORT(
         a : IN  std_logic_vector(7 downto 0);
         b : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         ce : IN  std_logic;
         s : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(7 downto 0) := (others => '0');
   signal b : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal ce : std_logic := '0';
	
	--Expected and error
	signal exp_s: std_logic_vector(7 downto 0) := (others => '0');
	signal err_s: std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(7 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_level_sub PORT MAP (
          a => a,
          b => b,
          clk => clk,
          ce => ce,
          s => s
        );

   -- Clock process definition
	Clk_proc: PROCESS
	BEGIN
		clk <= '1';
		WAIT FOR 10 ns;
		clk <= '0';
		WAIT FOR 10 ns;
	END PROCESS Clk_proc;

  
	VectorProc: PROCESS
		FILE vectorfile: text; 
		VARIABLE inputline: line;
		VARIABLE num: integer := 0;
		VARIABLE temp_a: std_logic_vector(7 downto 0);
		VARIABLE temp_b: std_logic_vector(7 downto 0);
		
	BEGIN
		file_open(vectorfile, "vectors.txt", read_mode);
		ce <= '1';
		WHILE NOT endfile(vectorfile) LOOP
			IF num = 6 THEN
				ce <= '0';
			END IF;
			
			WAIT UNTIL clk='1' AND clk'EVENT;
			readline(vectorfile, inputline);
			read(inputline, temp_a);
			a <= temp_a;
			readline(vectorfile, inputline);
			read(inputline, temp_b);
			b <= temp_b;
			
			num := num + 1;
		END LOOP; 
		file_close(vectorfile);
		WAIT;
	END PROCESS VectorProc; 



	ExpectedProc: PROCESS
		FILE expectedfile: text; 
		VARIABLE expectedline: line;
		VARIABLE temp: std_logic_vector(7 downto 0);

	BEGIN
		file_open(expectedfile, "expected.txt", read_mode);
		exp_s <= "XXXXXXXX";
		WAIT UNTIL clk='1' AND clk'EVENT;
		WHILE NOT endfile(expectedfile) LOOP
			WAIT UNTIL clk='1' AND clk'EVENT;
			readline(expectedfile, expectedline);
			read(expectedline, temp);
			exp_s <= temp;
			
		END LOOP; 
		file_close(expectedfile);
	WAIT;
	END PROCESS ExpectedProc; 


	CheckProc: PROCESS
	VARIABLE check: bit := '1';
	BEGIN
		WAIT UNTIL clk='0' AND clk'EVENT;
		IF s /= exp_s THEN
			err_s <= '1';
		ELSE
			err_s <= '0';
		END IF;
		
		WAIT FOR 1 ns;
		ASSERT (err_s /= '1') REPORT "Unexpected behaviour" SEVERITY error;
		
		
	END PROCESS CheckProc;

END;
