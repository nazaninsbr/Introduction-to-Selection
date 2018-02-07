//
//  factorial.c
//  c examples
//
//  Created by Apple on 8/28/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int main()
{
    int result=1;
    int a;
    scanf("%d", &a);
    if(a==0)
        printf("\n1");
    else
    {
        for(int i=1; i<=a; i++)
            result = result*i;
        printf("\n%d", result);
    }
    return 0;
}
