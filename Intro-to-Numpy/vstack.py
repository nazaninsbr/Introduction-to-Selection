import numpy as np 


a = np.arange(6).reshape(3, 2)
b = np.arange(6, 12).reshape(3, 2)


print(np.vstack((a, b)))