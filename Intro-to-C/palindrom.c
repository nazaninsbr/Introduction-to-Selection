//  lab 6 additional
//  Created by Nazanin Sabri on 11/23/15.
// all of the parts together in one file
#include <stdio.h>
#include <string.h>
#include <alloca.h>
#include <stdlib.h>
/*the usual size of a string in these exercises are considered to be 20 characters + null!*/
#define LENGHT 21
int palindrom (char stringPalindrom [], int );
int main()
{
    /**/
    /**/
    /*these variables will be used for part 3- palindrome string*/
    int lenght;
    char stringPalindrome[LENGHT];
    int answer;
    /**/
    /**/
    /*these are for part 4- the pointer is for malloc*/
    char stringToPutToghether1[LENGHT], stringToPutToghether2[LENGHT];
    char *ptr_one;
    int lenght1, lenght2, i;
    /**/
    /**/
    /*part 3 palindeome string*/
    printf("\nPlease enter your string and then the lenght of it:\n");
    scanf("%s", stringPalindrome);
    scanf("%d", &lenght);
    answer =palindrom (stringPalindrome, lenght);
    if (answer==0) {
        printf("\n (NO) Not a palindrome string");
    }
    else if (answer==1)
    {
        printf("\n (YES) This is a palindrome string");
    }
    /**/
    /**/
    /*part 4: putting two strings toghether*/
    printf("\nPlease enter two strings:\n");
     scanf(" %[^\n]",stringToPutToghether1);
    scanf(" %[^\n]",stringToPutToghether2);
    lenght1=(int) strlen(stringToPutToghether1);
    lenght2= (int) strlen(stringToPutToghether1);
    /*if the reslult of putting them thogether fit into the first one meaning the result was less than 20 characters*/
    if ((lenght1+lenght2)<20) {
        strcat(stringToPutToghether1, stringToPutToghether2);
        printf("\nthe result of putting the two strings toghether is: %s ", stringToPutToghether1);
        return 0;
    }
    ptr_one = (char *)malloc(sizeof(lenght1+lenght2));
    if (ptr_one == 0)
    {
        printf("ERROR: Out of memory\n");
        return 0;
    }
    /*a function in string.h that does what we need here:*/
    for (i=0; i<=lenght1; i++) {
        *(ptr_one+i)= stringToPutToghether1[ i];
    }
    for (i=0; i<=lenght2; i++) {
        *(ptr_one+lenght1+i)= stringToPutToghether2 [i];
    }
    printf("\nthe result of putting the two strings toghether is: ");
    for (i=0; i<= lenght1+lenght2; i++)
    {
        printf("%c", *(ptr_one+i));
    }
    free (ptr_one);
    return 0;
}
/*Palindrome string:*/
/*this function tells us if the entered string is palindrome or not*/
int palindrom (char stringPalindrome [], int lenght )
{
    int answer=1,i ;
    
    for (i=0; i<=lenght; i++) {
        if (stringPalindrome[i] != stringPalindrome[lenght-i-1]) {
            answer=0;
            break;
        }
    }
    return answer;
}