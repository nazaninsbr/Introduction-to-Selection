import numpy as np 
import time 

#we plan to see how much time it takes to add two lists and two arrays 


SIZE = 10000000


l1 = range(SIZE)
l2 = range(SIZE)



a1 = np.arange(SIZE)
a2 = np.arange(SIZE)


start = time.time()
result = [(x+y) for x,y in zip(l1, l2)]
print("python list took: ", (time.time()-start)*1000)



start = time.time()
result = a1 + a2
print("numpy array took: ", (time.time()-start)*1000)



#this program shows this is time efficiant 