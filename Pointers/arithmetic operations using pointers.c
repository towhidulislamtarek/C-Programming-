#include <stdio.h>

int main()
{
    float num1;
    float  num2;
    float *ptr1;
    float *ptr2;

    float sum, diff, mult, div;

    ptr1 = &num1; 
    ptr2 = &num2; 

    printf("Enter 1st real numbers: ");
    scanf("%f", ptr1);
    printf("Enter 2nd real number: ");
    scanf("%f",ptr2);

    sum = (*ptr1) + (*ptr2);
    diff = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div = (*ptr1) / (*ptr2);

    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", mult);
    printf("Quotient = %.2f\n", div);

    return 0;
}