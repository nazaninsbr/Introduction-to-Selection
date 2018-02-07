#include <stdio.h>
#define PI 3.14
int main()
{
	float r, area; 
	printf("\nPlease enter the radius: ");
	scanf("%f", &r);
	area= PI*r*r;
	printf("%.3f\n", area);
}