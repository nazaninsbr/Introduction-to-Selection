#include <stdio.h>
int find_max(int a, int b, int c)
{
	if(a>b && a> c)
		return a;
	if(b>a && b>c)
		return b;
	else 
		return c;
}
int main()
{
	int a, b, c;
	int middle=0, least=0;
	scanf("%d%d%d", &a, &b, &c);
	int max= find_max(a, b, c);
	if(max == a)
	{
		if(b>c)
		{
			middle = b;
			least = c;
		}
		else 
		{
			middle = c;
			least= b;
		}
	}
	else if(max == b)
	{
		if(a>c)
		{
			middle = a;
			least = c;
		}
		else 
		{
			middle = c;
			least = a;
		}
	}
	else if(max == c)
	{
		if(a>b)
		{
			middle = a;
			least = b;
		}
		else 
		{
			middle = b;
			least = a;
		}
	}
	printf("\nfrom most to lest the numbers are: %d, %d, %d", max, middle, least);
	return 0;
}