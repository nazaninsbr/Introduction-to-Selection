#include <stdio.h>
int main()
{
	int rem[100];
	int decimal;
	printf("Please enter your number in decimal:\n");
	scanf("%d", &decimal);
	while(num>0)
 	{
 		rem[i]=num%2;
 		num=num/2;
 		i++;
		length++;
 	}
	printf("\nThe number in Binary is: ");
    for(i=length-1;i>=0;i--)
        printf("%d",rem[i]);
}