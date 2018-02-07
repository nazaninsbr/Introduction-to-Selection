//
//  main.c
//  Lab 3. Q additional
//
//  Created by Nazanin Sabri on 10/20/15.
#include <stdio.h>

int main() {
	printf("please enter a number: \n");
	int n;
	scanf("%d", &n);
	if (n<5)
	{
		printf("the shape will not be pretty therefore we will not print it!");
		return 0;
	}
	else{
		for (int i = 1; i <= n; i++){
			printf("\n");
			int q = n - i;
			if (i == 1)
				q = n - i - 1;
			for (; q >= 0; q--)
			{
				printf(" * ");
			}
			for (int k = 2; k<2 * i - 1; k++)
			{
				printf("   ");
			}
			for (int j = n - i; j >= 0; j--)
			{
				printf(" * ");
			}
		}
		printf("\n");
		for (int i = 2; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (i == 1 && j == 1)
					printf(" *  * ");
				else
					printf(" * ");
			}
			for (int k = 1; k<2 * n - 1 - (2 * i - 1); k++)
			{
				printf("   ");
			}
			int q = 1;
			if (i == n)
				q = 2;
			for (; q <= i; q++)
			{
				printf(" * ");
			}
			printf("\n");
		}
	}
	return 0;
}
