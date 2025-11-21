#include <stdio.h>
int main()
{
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double m1 = 0, m2 = 0;

    printf("Enter x1, y1 number: ");
    scanf("%lf", &x1, &y1);

    printf("Enter x2,y2 number: ");
    scanf("%lf", &x2, &y2);

    printf("Enter x3,y3 number: ");
    scanf("%lf", &x3, y3);

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if (m1 = m2)
        printf("One straight line.");

    else
        printf("It is not straight line.");

    return 0;
}