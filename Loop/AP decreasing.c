#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 100;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}