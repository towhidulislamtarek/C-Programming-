#include <stdio.h>
int main()
{
    float a = 100;
    float i, n;

    printf("Enter a number: ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        printf(".1%f" , a);

        a = a -.5;
    }
}