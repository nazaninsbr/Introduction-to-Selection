import numpy as np
import cv2

im0 = np.zeros((512, 512, 3), np.uint8)
im0 = cv2.circle(im0, (200, 200), 63, (100, 100, 100), -1)
cv2.imshow('circle', im0)
cv2.waitKey(0)
