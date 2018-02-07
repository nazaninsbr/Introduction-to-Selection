def heapsort(a):
    heapify(a, len(a))
    end = len(a)-1
    while end > 0:
        a[end], a[0] = a[0], a[end]
        end -= 1
        sift_down(a, 0, end)
    return a

def heapify(a, count):
    start = int((count-2)/2)
    while start >= 0:
        sift_down(a, start, count-1)
        start -= 1

def sift_down(a, start, end):
    root = start
    while (root*2+1) <= end:
        child = root * 2 + 1
        swap = root
        if a[swap] < a[child]:
            swap = child
        if (child + 1) <= end and a[swap] < a[child+1]:
            swap = child+1
        if swap != root:
            a[root], a[swap] = a[swap], a[root]
            root = swap
        else:
            return
def find_energy(stones=[]):
    n = len(stones)
    min_energy = 0
    for x in range(n-1):
        print stones
        if(len(stones)==0):
            break
        min_energy += stones[0] + stones[1]
        stones[0] +=stones[1]
        stones[1] , stones[len(stones)-1] = stones[len(stones)-1] , stones[1]
        stones.pop()
        heapsort(stones)
    return min_energy

if __name__=="__main__":
    n = int(raw_input())
    stones = raw_input().split(' ')
    for i in range(n):
        stones[i] = (int(stones[i]))
    stones = heapsort(stones)
    print find_energy(stones)