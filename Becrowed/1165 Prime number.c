#include <stdio.h>
int main()
{
    int n, i, z = 0;
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            z = 1;
            break;
        }
    }
    if (z == 0)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not prime number.", n);
    }
    return 0;
}