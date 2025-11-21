#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Enter your fast number: ");
    scanf("%d", &num1);
    printf("Enter your secend number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mull = num1 * num2;

    printf("This is sum is : %d\n",sum);
    printf("This is subtraction number is: %d\n", sub);
    printf("This is mulltication is: %d\n", mull);

    return 0;
}