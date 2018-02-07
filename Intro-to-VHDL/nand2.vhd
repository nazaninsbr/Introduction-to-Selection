LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY nand2 IS
	PORT(i1, i2: IN BIT; o1: OUT BIT);
END nand2;

ARCHITECTURE single_delay OF nand2 IS
BEGIN
	o1 <= i1 NAND i2 AFTER 5 NS;
END single_delay;

