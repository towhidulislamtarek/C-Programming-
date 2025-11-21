#include <stdio.h>

double pow(double base, int expo);

int main()
{
    int expo;
    double base;
    double power;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);

    power = pow(base, expo);

    printf("%.2lf ^ %d = %f", base, expo, power);

    return 0;
}

double pow(double base, int expo)
{
    if (expo == 0)
    {
        return 1;
    }
    else if (expo > 0)
    {
        return base * pow(base, expo - 1);
    }
    else
    {
        return 1 / pow(base, -expo);
    }
}