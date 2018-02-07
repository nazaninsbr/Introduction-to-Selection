#include <stdio.h>

int main(){
	int x; 
	scanf("%d", &x);
	if(x<0){
		printf("The number is negative.\n");
	}
	else if(x==0){
		printf("The number is zero.\n");
	}
	else 
		printf("The number is positive.\n");
	return 0;
}
