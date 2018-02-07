#include <stdio.h>
int main()
{
	int a[5];
	int average; 
	printf("please enter 5 numbers:\n");
	for(int i=0; i<5; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<5; i++)
		average += a[i];
	printf("\n%d", average/5);

}