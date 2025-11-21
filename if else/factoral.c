#include <stdio.h>
int main()
{
    int n, i;
    int product;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < -n; i++)
    {
        product = product * 1;
    }
    printf("The factors is : %d", product);

    return 0;
}