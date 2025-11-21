#include<stdio.h>
int factorial(int n);

int main()
{
    int n;
    printf("Enter a number: ");//=4
    scanf("%d",&n);//=4

    int fact = factorial (n);//n=4
    printf ("%d", fact);
    return 0;
}

int factorial (int n) //n=4
{
    int fact =1;
    for(int i=2;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}