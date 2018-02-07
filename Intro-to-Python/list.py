if __name__ == '__main__':
	list1=["hello", "to", "you", "too"]
	print(list1)
	list2=[1, 2, 3, 4, 5]
	for i in list2:
		print(i)
	print(type(list1[0]))
	print(type(list2[1]))
	print(list2.count(4))
	list3 = [1, 1, 2, 1, 2, 1, 3]
	print(list3.count(1))
	print(list3.count(3))
	print(list3.count(2))
	list2.insert(-1, 9)
	list2.insert(0, 10)
	print(list2)
	list2.remove(3)
	print(list2)
	print(list2.index(9))
	list2.reverse()
	print(list2)
	list2.sort()
	print(list2)
	list2.pop()
	print(list2)
	l1 = [2*x for x in list2]
	print(l1)
	l2 = [x*x for x in list2]
	print(l2)
	list4 = [' h kj kk ', ' dkj ', 'f d k l']
	l3 = [y.strip() for y in list4]
	print(l3)
	l4 = [(t, t*t) for t in range(10)]
	print(l4)