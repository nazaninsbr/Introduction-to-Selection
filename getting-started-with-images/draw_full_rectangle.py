import numpy as np
import cv2

img = np.zeros((512, 512, 3), np.uint8)
img = cv2.rectangle(img, (234, 0), (510, 128), (0, 255, 0), -1)
cv2.imshow('full', img)
cv2.waitKey(0)
