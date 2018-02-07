class node:
	def __init__(self, name, next=None):
		self.name = name
		self.next = next
	def getter_next(self):
		return self.next
	def getter_name(self):
		return self.name
	def setter_name(self, name):
		self.name = name
	def setter_next(self, next):
		self.next = next

def print_recursively(lastbook):
	if lastbook==None:
		return
	print_recursively(lastbook.getter_next())
	print lastbook.getter_name()

if __name__=="__main__":
	line = raw_input()
	entered = line.split(' ')
	lastbook, firstbook, kbook = None, None, None
	n = int(entered[0])
	m = int(entered[1])
	k = int(entered[2])
	for x in range(n):
		if x==0:
			firstbook= node(raw_input())
			prev = firstbook
		elif x==(k-1):
			kbook = node(raw_input(), prev)
			prev = kbook
			if n==k:
				lastbook = kbook
		elif x ==(n-1):
			lastbook = node(raw_input(), prev)
			prev = lastbook
		else:
			temp = node(raw_input(), prev)
			prev = temp
	for j in range(m):
		line = raw_input()
		if "ADD" in line:
				temp = node(line[line.find("(")+1:line.find(")")])
				firstbook.setter_next(temp)
				firstbook = temp
				kbook = kbook.getter_next()
				n += 1
		if "ROTATE"==line:
			if(n>k):
				temp = firstbook.getter_name()
				firstbook.setter_name(kbook.getter_name())
				kbook.setter_name(temp)
			else:
				temp = lastbook.getter_name()
				lastbook.setter_name(firstbook.getter_name())
				firstbook.setter_name(temp)
	print_recursively(lastbook)
