import numpy as np 
import cv2

im0 = cv2.imread('cat.jpeg', 0)
cv2.imshow('cat', im0)
cv2.waitKey(0)
cv2.imwrite('catgray.jpeg', im0)
