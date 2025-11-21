#include <stdio.h>
int main()
{
    int n;
    printf("Inter this number: ");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("The number is divisible by 3 or 5");
        }

        else
        {
            printf("The number is not divisible by 3 or 5");
        }
    }
    else
        printf("The number is not divisible by 3 or 5");

    return 0;
}