import random

def quicksort(a, l, r):
    if l >= r:
        return a
    p = partition(a, l, r)
    quicksort(a, l, p)
    quicksort(a, p+1, r)
    return a

def partition(a, l, r):
    p = int(random.random() * (r-l))+l
    a[l], a[p] = a[p], a[l]
    pivot = a[l]
    i = l+1
    for j in xrange(i, r):
        if a[j] < pivot:
            a[j], a[i] = a[i], a[j]
            i += 1
    a[l], a[i-1] = a[i-1], a[l]
    return i-1

def find_energy(stones=[]):
	n = len(stones)
	min_energy = 0
	for x in range(n-1):
		if(len(stones)==0):
			break
		quicksort(stones, 0, len(stones))
		min_energy += stones[0] + stones[1]
		stones[0] +=stones[1]
		stones[1] , stones[len(stones)-1] = stones[len(stones)-1] , stones[1]
		stones.pop()
	return min_energy




if __name__=="__main__":
	n = int(raw_input())
	stones = raw_input().split(' ')
	for i in range(n):
		stones[i] = (int(stones[i]))
	print find_energy(stones)