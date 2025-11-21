#include <stdio.h>
int main()
{
    float radius;
    float diameter = 0;
    float cincumference = 0;
    float area = 0;

    printf("Enter Radius:");
    scanf("%f", &radius);

    diameter = 2 * radius;
    cincumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("Radius is %.2f\n", diameter);
    printf("Cincumference is %.2f\n", cincumference);
    printf("Aria ia %.2f", area);

    return 0;
}