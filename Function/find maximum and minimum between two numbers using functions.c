#include<stdio.h>

int max (int num1,int num2);
int min (int num1, int num2);

int main()
{
    int num1;
    int num2;
    int maximum;
    int minimum;

    printf("Enter this 1st number: ");
    scanf("%d",&num1);
    printf("Enter this 2nd numbefr: ");
    scanf("%d",&num2);

    maximum = max(num1,num2);
    minimum = min(num1,num2);

    printf("The miximum number is = %d\n",maximum);
    printf("The Minimum number is = %d\n",minimum);
}

int max(int num1, int num2)
{
    return num1>num2 ? num1:num2;
}

int min(int num1, int num2)
{
    return num1>num2 ? num2 : num1;
}
