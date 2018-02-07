LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY nand3 IS
	PORT(i1, i2, i3: IN BIT; o1: OUT BIT);
END nand3;

ARCHITECTURE single_delay OF nand3 IS
BEGIN
	o1 <= NOT(i1 AND i2 AND i3) AFTER 6 NS;
END single_delay;