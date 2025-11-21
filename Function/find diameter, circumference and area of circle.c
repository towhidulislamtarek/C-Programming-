#include <stdio.h>

double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);

int main()
{
    double radius;
    double dia;
    double cir;
    double are;

    printf("Enter this radious: ");
    scanf("%lf", &radius);

    dia = Diameter(radius);
    cir = Circumference(radius);
    are = Area(radius);

    printf("Diameter of the circle = %.2lf units\n", dia);
    printf("Circumference of the circle = %.2lf units\n", cir);
    printf("Area of the circle = %.2lf units\n", are);

    return 0;
}

double Diameter(double radius)
{
    return (2 * radius);
}

double Circumference(double radius)
{
    return (2 * 3.1416 * radius);
}

double Area(double radius)
{
    return (3.1416 * radius * radius);
}