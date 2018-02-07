higth = []
n = int(raw_input())
higth = raw_input().split(' ')
for i in range(n):
	higth[i] = (int(higth[i]))
max_value= 0
for i in range(n):
	min_higth = higth[i]
	for j in range(i, n):
		if(min_higth>higth[j]):
			min_higth = higth[j]
		x = (j - i +1)*min_higth
		if max_value<x:
			max_value = x
print max_value