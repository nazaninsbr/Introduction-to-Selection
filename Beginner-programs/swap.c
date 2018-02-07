//
//  swap.c
//  c examples
//
//  Created by Apple on 8/28/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    return 0;
}