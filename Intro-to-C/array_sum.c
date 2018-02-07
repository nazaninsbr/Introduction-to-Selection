#include <stdio.h>

int main(){
	int arr[10];
	int sum=0; 
	for(int i=0; i<10; i++){
		arr[i] = i*i*i;
	}
	for(int j=0; j<10; j++){
		sum += arr[j];
	}
	printf("The sum is: %d\n", sum);
	return 0;
}
