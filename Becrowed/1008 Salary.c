#include <stdio.h>
int main()
{
    int number;
    int houres;
    float amount;
    float salary;

    printf("Enter this number:");
    scanf("%d", &number);

    printf("Enter this houres: ");
    scanf("%d", &houres);

    printf("Enter this amount: ");
    scanf("%f", &amount);

    salary = houres * amount;

    printf("NUMBER =%d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}