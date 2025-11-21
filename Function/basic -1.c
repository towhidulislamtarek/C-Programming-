#include<stdio.h>
#include<string.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2;
    printf("Enter this 1st number: ");
    scanf("%d",&num1);
    printf("Enter this 2nd number: ");
    scanf("%d",&num2);

    printf("The sum is : %d",sum(num1,num2));
}