//
//  odd_or_even.c
//  c examples
//
//  Created by Apple on 8/26/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x;
    if(! scanf("%d", &x))
        printf("\nnot an integer");
    else
    {
        if(x%2)
            printf("\nodd");
        else
            printf("\neven");
    }
    return 0;
}