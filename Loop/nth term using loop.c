#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum = 0;
    int avg;

    printf("Enter the nth number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }

    printf("Sum=");
    printf("%d\n", sum);
    printf("Avg=");
    avg = sum / n;
    printf("%d\n", avg);

    return 0;
}
