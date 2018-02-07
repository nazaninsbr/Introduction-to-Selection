//
//  add_sub_multiply_divide.c
//  c examples
//
//  Created by Apple on 8/26/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("\nAddition: %d + %d = %d", a, b, a+b);
    printf("\nSubtraction: %d + %d = %d", a, b, a-b);
    printf("\nMultiply: %d + %d = %d", a, b, a*b);
    printf("\nDivide: %d + %d = %d", a, b, a/b);
    return 0;
}