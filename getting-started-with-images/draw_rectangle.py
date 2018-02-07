import numpy as np
import cv2

im0 = cv2.imread('cat.jpeg')
cv2.rectangle(im0, (384, 0), (510, 128), (0, 255, 0), 3)
cv2.imshow('green rectangle', im0)
cv2.waitKey(0)

