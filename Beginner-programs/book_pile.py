line = raw_input()
entered = line.split(' ')
n = int(entered[0])
m = int(entered[1])
k = int(entered[2])
books = []
for i in range(n):
	books.insert(0, raw_input())
for j in range(m):
	line = raw_input()
	if "ADD" in line:
		books.append(line[line.find("(")+1:line.find(")")])
		n = n+1
	if "ROTATE"==line:
		if n>k:
			books = books[0:n-k] + books[n-1:] + books[n-k:n-1]
		else:
			 books = books[n:] + books[:n]
i = n-1
while i>=0:
	print books[i]
	i -=1