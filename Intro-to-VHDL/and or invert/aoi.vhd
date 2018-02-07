LIBRARY ieee; 
USE ieee.std_logic_1164.all;

ENTITY and_or_invert IS 
	PORT(
		a, b, c, d: IN STD_LOGIC; 
		res: OUT STD_LOGIC
	);
END and_or_invert;


ARCHITECTURE arch1 OF and_or_invert IS 
BEGIN
	res <= NOT((a AND b) OR (c AND d)) AFTER 2 NS;
END arch1; 