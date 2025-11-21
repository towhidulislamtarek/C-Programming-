#include <stdio.h>
int main()
{
    int number1;
    int number2;
    int sum = 0;
    int difference = 0;
    int product = 0;
    float quotient = 0;
    int modulas = 0;

    printf("Enter 1st Number");
    scanf("%d", &number1);

    printf("Enter 2nd Number");
    scanf("%d", &number2);

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    modulas = number1 % number2;

    printf("Sum is= %d\n", sum);
    printf("Difference= %d\n", difference);
    printf("Product= %d\n", product);
    printf("Quotion= %.2f\n", quotient);
    printf("Modulas= %d\n", modulas);
}