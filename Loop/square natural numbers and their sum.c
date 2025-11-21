#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("\nThe squre number is %d is:", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", i * i);
        sum += i * i;
    }
    printf("\nThe natural number and their sum is %d\n", sum);

    return 0;
}