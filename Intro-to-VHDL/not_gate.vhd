LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY inv IS
	PORT(i1: IN BIT; o1: OUT BIT);
END inv;

ARCHITECTURE single_delay OF inv IS
BEGIN
	o1 <= NOT i1 AFTER 4 NS;
END single_delay;