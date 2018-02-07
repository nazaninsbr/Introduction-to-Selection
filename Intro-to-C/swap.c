#include <stdio.h>

int main(){
	int x, y, temp; 
	scanf("%d%d", &x, &y);
	printf("x = %d, y = %d\n", x, y);
	temp = x;
	x = y; 
	y = temp; 
	printf("x = %d, y = %d\n", x, y);
	return 0;
}
