//
//  check_vowel.c
//  c examples
//
//  Created by Apple on 8/28/16.
//  Copyright (c) 2016 Nazanin sabri. All rights reserved.
//

#include <stdio.h>
int check_vowel(char x)
{
    if(x=='o' || x=='a' || x=='e' || x=='i' || x=='u' || x=='O' || x=='A' || x=='E' || x=='I' || x=='U')
        return 1;
    else
        return 0;
}
int main()
{
    char a;
    scanf("%c", &a);
    if(check_vowel(a)==1)
        printf("\nhas vowels");
    else
        printf("\ndoesnt have vowels");
    return 0;
}