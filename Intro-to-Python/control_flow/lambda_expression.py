def incrementor(n):
	return lambda x: x+n
f = incrementor(3)
print(f(80))
