import cv2
import numpy as np

im0 = cv2.imread('cat.jpeg', 0)
cv2.imshow('cat', im0)
k = cv2.waitKey(0)
#if the pressed key was not 's'
if k==27:
	cv2.destroyAllWindows()
elif k==ord('s'):
	cv2.imwrite('catPressedS.jpeg', im0)
	cv2.destroyAllWindows()
