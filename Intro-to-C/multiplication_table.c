//
//  main.c
//  lab 6 number 1 at home assignment
//  Created by Nazanin sabri on 11/21/15.
#include <stdio.h>
#define SIZE 9
int main ()
{
    int i, j;
    int table [SIZE][SIZE];
    for (i=0; i<9 ; i++)
    {
        for (j=0; j<9; j++) {
            table[i][j] = (i+1)*(j+1);
        }
    }
    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            printf(" %d   ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}