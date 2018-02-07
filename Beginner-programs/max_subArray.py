def maxSubArrayValue(l, h, heigth = []):
	if l==h or l<0 or h<0:
		return 0
	max_one, max_two, max_three = 0, 0, 0
	middle = int((l+h)/2)
	min_val = heigth[middle]
	min_right = find_min(min_val, middle+1, h, heigth)
	min_left = find_min(min_val, l, middle-1, heigth)
	if min_left==-1 and min_right==-1:
		return (h-l+1)*min_val
	elif min_right==-1:
		min_right= middle 
		max_one = (h-(min_left+1)+1)*min_val
	elif min_left==-1:
		min_left = middle
		max_one= (min_right-1-l+1)*min_val
	else:
		max_one = (min_right-1-(min_left+1)+1)*min_val
	max_two = maxSubArrayValue(min_right,h, heigth)
	max_three = maxSubArrayValue(l, min_left, heigth)
	return find_max_three(max_three, max_two, max_one)
