#include <stdio.h>
int main()
{
    int n, i, sum = 0, t = 1;
    printf("Enter this number:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d", t);
        if (i < n)
        {
            printf("+");
        }
        sum = sum + t;
        t = (t * 10) + 1;
    }
    printf("\nThe sum is %d", sum);
    return 0;
}