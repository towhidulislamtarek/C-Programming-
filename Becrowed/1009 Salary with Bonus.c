#include <stdio.h>

int main()
{
    float salary;
    float values;
    float total;
    char name;

    printf("Enter this name: ");
    scanf("%s", &name);

    printf("Enter this salary: ");
    scanf("%f", &salary);

    printf("Enter this values: ");
    scanf("%f", &values);

    total = salary + values * .15;

    printf("TOTAL = R$ %.2f", total);

    return 0;
}