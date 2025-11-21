#include <stdio.h>
int main()
{
    int num1, num2;
    int max = 0;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    printf("The maximum using conditional operator: %d", max);

    return 0;
}