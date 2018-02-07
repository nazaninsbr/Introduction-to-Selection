def f(l, r, x):
	counter=0
	for i in range (l, r+1):
		if i<0:
			pass
		if r>(len(numbers)):
			break
		elif numbers[i]==x:
			counter +=1
	return counter


def calculateOnetoI(numbers, OnetoI):
	for i in range(len(numbers)):
		OnetoI[i]= f(0, i, numbers[i])

def calculateJton(numbers, JtoN):
	n = len(numbers)
	for j in range(n):
		JtoN[j] = f(j, n-1, numbers[j])

def calculateCount(JtoN, OnetoI, n):
	counter = 0
	for i in range(n):
		for j in range(i+1, n):
			if OnetoI[i] > JtoN[j]:
				counter+=1
	return counter

def read_input(numbers=[]):
	n = int(input())
	inputs = input()
	numbers = inputs.split(' ')
	for i in range(n):
		numbers[i]=int(numbers[i])
	return numbers


if __name__ == '__main__':
	numbers = []
	numbers = read_input(numbers)
	OnetoI = {}
	JtoN = {}
	calculateOnetoI(numbers, OnetoI)
	calculateJton(numbers, JtoN)
	print(calculateCount(JtoN, 	OnetoI, len(numbers)))
