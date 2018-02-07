//
//  decimal_to_binary.c
//  c examples
//
//  Created by Apple on 8/30/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int main()
{
    int command = 1;
    while (command) {
        scanf("%d", &command);
        switch (command) {
            case 1:
                printf("1");
                break;
            case 0:
                printf("quit");
                break;
        }
    }
}