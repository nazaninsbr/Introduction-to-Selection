//
//  add_n_numbers.c
//  c examples
//
//  Created by Apple on 8/28/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int main()
{
    printf("\nplease enter the number of numbers you want to enter: ");
    int n, sum=0, x;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    printf("\nthe sum is: %d", sum);
    return 0;
}