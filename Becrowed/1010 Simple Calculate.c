#include <stdio.h>
int main()
{
    int a;
    int b;
    double c;
    double res;

    printf("Enter this first element: ");
    scanf("%d %d %lf", &a, &b, &c);

    printf("Enter this 2nd element: ");
    scanf("%d %d %lf", &a, &b, &c);

    res = (b * c);
    res += (b * c);

    printf("VALOR A PAGAR : R$ %.2lf", res);

    return 0;
}