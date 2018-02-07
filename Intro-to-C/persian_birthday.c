//
//  main.c
//  Created by Nazanin sabri on 10/15/15.

#include <stdio.h>
int main ()
{
/* part six: bithday!*/
int year, month, day;
printf ("\n please enter the year you were born in:");
scanf("%d", &year);
if (year<= 1400 && year>= 1300)
{
    printf ("\n please enter the month you were born in:");
    scanf("%d", &month);
    if (month>0 && month <13)
    {
        printf ("\n please enter the day you were born on:");
        scanf ("%d", &day);
        if (day>0 && day <31) {
            printf ("\n your date of birth is: %d/%d/%d", year, month, day);
            return 0;
        }
        else
        {
            printf ("\n the day you entered is invalid!");
            return 0;
        }
    }
    else
    {
        printf ("\nthe month you entered is invalid!");
        return 0;
    }
    
}
else
{
    printf ("\nthe year you entered is invalid!");
    return 0;
}
}
