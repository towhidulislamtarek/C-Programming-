#include <stdio.h>
int main()
{
    int i;
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (i % 2 == 0)
    {
        sum = -n / 2;
    }
    else if (i % 2 != 0)
    {
        sum = -n / 2 + n;
    }
    printf("The sum is: %d", sum);

    return 0;
}