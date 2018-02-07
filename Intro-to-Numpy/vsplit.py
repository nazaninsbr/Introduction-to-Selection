import numpy as np 


a = np.arange(30).reshape(2, 15)


print(np.vsplit(a, 2))