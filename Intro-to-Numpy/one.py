import numpy as np 
import sys

li = range(1000)
print(sys.getsizeof(1)*len(li))

array = np.arange(1000)
#size is the total size of array 
#itemsize is the size of one element
print(array.size*array.itemsize)


#so we can see that numpy is memory efficiant 