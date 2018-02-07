import numpy as np
import cv2

im0 = cv2.imread('cat.jpeg')
im1 = im0.copy()
im2 = im0

im0 = cv2.circle(im0, (256, 356), 60, (0, 0, 255) , -1)

cv2.imshow('image 0', im0)
cv2.imshow('image 1', im1)
cv2.imshow('image 2', im2)


cv2.waitKey(0)

