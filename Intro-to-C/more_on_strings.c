#include <stdio.h>
#define LENGHT 22
int main()
{
    fflush(stdin);
    fflush(stdout);
    int i, k, j;
    char s[5][LENGHT];
    for (i=0; i<5; i++) {
        for (j=0; j<22; j++) {
            s[i][j]='\0';
        }
    }
    for (i=0; i<5; i++)
    {
        scanf(" %[^\n]",s[i]);
    }
    for (i=1; i<5; i++)
    {
        for (j=0; j<22 ; j++)
        {
            for (k=0; k<21; k++)
            {
                if (s[0][k] != '\0')
                {
                    if (s[i][j]==s[0][k] || s[i][j]==(s[0][k]+32) ||s[i][j]==(s[0][k]-32))
                    {
                        s[i][j]='$';
                    }
                }
            }
        }
    }
    for (i=0; i<5; i++) {
        for (j=0; j<21; j++) {
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}