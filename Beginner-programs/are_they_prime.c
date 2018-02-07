#include <stdio.h>
int main()
{
	int a, b, min;
	scanf("%d%d", &a,&b);
	if(a<b)
		min= a;
	else if(b<a)
		min = b;
	else 
	{
		printf("\nthey are the same so they are not prime to each other\n");
		return 0;
	}
	for(int i=2; i<=min; i++)
	{
		if(a%i==0 && b%i==0)
		{
			printf("\nthey are both divisible by %d so they are not prime to each other\n", i);
			return 0;
		}
	}
	printf("\nthey are prime to each other");
	return 0;
}