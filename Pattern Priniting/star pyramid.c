#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int k;
    int nst;

    printf("Enter this number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }

    return 0;
}