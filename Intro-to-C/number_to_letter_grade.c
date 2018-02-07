//
//  main.c
//  lab 3. Q 4
//
//  Created by Nazanin Sabri on 10/20/15.
#include <stdio.h>
#include <math.h>
int main() {
	int numberOfStudants, counter = 1;
	float score;
	printf("please enter the number of your studants:\n");
	scanf("%d", &numberOfStudants);
	do{
		printf("\nwhat is the score of this studant?");
		scanf("%f", &score);
		int UseableScore;
		UseableScore =(int) ceilf(score);
		counter++;
		switch (UseableScore) {
		case 20:
		case 19:
		case 18:
		case 17:
			printf("\nA");
			break;
		case 16:
		case 15:
			printf("\nB");
			break;
		case 14:
		case 13:
			printf("\nC");
			break;
		case 12:
		case 11:
			printf("\nD");
			break;
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
			printf("\nFail");
			break;
		default:
			printf("\nwrong input");
			counter--;
			continue;
		}
	} while (counter <= numberOfStudants);
	return 0;
}
