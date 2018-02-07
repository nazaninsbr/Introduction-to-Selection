#include <stdio.h>
int main()
{
	float temp; 
	printf("please enter the temperature in centigrade:\n");
	scanf("%f",&temp)
	temp = (1.8 * temp) + 32;
 	printf("\nTemperature in Fahrenheit : %f ", temp);
}