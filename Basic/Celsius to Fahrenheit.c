#include <stdio.h>
int main()
{
    float celsius;
    float fahrenheit = 0;

    printf("Enter Fahrenhe=");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit is %.2f", fahrenheit);

    return 0;
}