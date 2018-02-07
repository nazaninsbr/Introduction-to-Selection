def find_max(a, b):
	if a>b:
		return a
	return b
def find_max_three(a, b, c):
	return find_max(a, find_max(b, c))