#include <stdio.h>
int main()
{
    float base;
    float height;
    float area = 0;

    printf("Enter Base: ");
    scanf("%f", &base);
    printf("Enter Height: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("The area of Triangle %.2f", area);

    return 0;
}