#include <stdio.h>
int add(int a, int b);
int main()
{
    int a;
    int b;
    printf("Enter 1st number :");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("The sum is :%d", sum);
    return 0;
}

int add(int a, int b)
{
    return a+b;
}