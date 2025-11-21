#include <stdio.h>
int main()
{
    int num1;
    int num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nt number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("This is Maximum number ");
    }
    if (num1 < num2)
    {
        printf("This is Minimum number");
    }
    if (num1 == num2)
    {
        printf("This is equal number");
    }

    return 0;
}