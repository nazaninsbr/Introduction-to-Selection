import numpy as np 

a = np.array([5, 6, 7, 8, 9])
print("info about a:")
print(a[0])
print(a.ndim)

b = np.array([[1, 2], [2,3]])
print("info about b:")
print(b.ndim)
print(b.itemsize)
print(b.dtype)


c = np.array([[1, 2, 3], [4, 5, 6]], dtype=np.float64)
print("info about c:")
print(c.ndim)
print(c.dtype)
print(c.shape)
print(a.size)