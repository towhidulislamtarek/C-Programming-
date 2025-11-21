#include <stdio.h>
int main()
{
    int a = 3;
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
    return 0;
}