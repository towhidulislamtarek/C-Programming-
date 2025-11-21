#include <stdio.h>
#include <math.h>
int main()
{
    double power;
    double base;
    double expo;

    printf("Enter is base: ");
    scanf("%lf", &base);
    printf("Enter is expo: ");
    scanf("%lf", &expo);

    power = pow(base, expo);

    printf("%.2lf",power);

    return 0;
}