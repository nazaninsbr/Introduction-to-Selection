#include <stdio.h>
int main()
{
	int a;
	if( ! scanf("%d", &a))
	{
		printf("\nthe entered number wasnt an integer!");
		return 0;
	}
	else 
		printf("\nthe number you entered was %d", a);
	return 0;
}