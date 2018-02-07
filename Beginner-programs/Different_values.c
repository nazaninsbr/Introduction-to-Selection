/* lab 4: the practice in home part!*/
/*created by Nazanin Sabri on october 30, 2015*/
#include <stdio.h>
# include <math.h>
/*declearing functions here*/
float f1 (int, float);
int f2 (int);
int f3(int);
int f4 (int);
int main ()
{
    int n, result_f2, result_f3, result_f4;
    float x, result_f1, answer;
    printf("Please enter two numbers n, x:\n");
    scanf("%d %f", &n ,&x);
    result_f1= f1(n, x);
    result_f2= f2(n);
    result_f3= f3(n);
    result_f4= f4(n);
    answer=( result_f1+ result_f2)/(sqrt(result_f3+ result_f4));
    printf("\n\n%f", answer);
    return 0;
}
float f1 (int n, float x)
{
    int i;
    float product=0, sum=0, xPoweredByi=1;
    for( i=1; i<=n; i++)
    {
        xPoweredByi*=x;
        if(i%2==0)
        {
            product= i* xPoweredByi;
        }
        else if (i%2==1)
        {
            product= (-1)*i*xPoweredByi;
        }
        sum+=product;
    }
    return sum;
}
int f2 (n)
{
    int i,j, product=0, sum=0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            product= (i-j)*(i-j);
            sum+=product;
        }
    }
    return sum;
}
int f3 (n)
{
    int i, product=1,j, answer=0;
    for (i=1; i<=n; i++)
    {
        product=1;
        for(j=1; j<=i; j++){
            product*=j;
        }
        answer+=product;
    }
    answer= answer*n;
    return answer;
}
int f4 (n)
{
    int i, sum=0;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        else
        {
            sum+= (-1)*i;
        }
    }
    sum= sum*sum;
    return sum;
}