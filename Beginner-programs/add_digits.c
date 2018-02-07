//
//  add_digits.c
//  c examples
//
//  This programs reads a number from the standard input and returns the sum of its digits.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//
#include <stdio.h>
int add_digits(int x)
{
    int sum=0;
    int digit=0;
    while (x>0) {
        digit= x%10;
        sum += digit;
        x = x/10;
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("\nthe sum of digits is: %d", add_digits(a));
    return 0;
}
