#include <stdio.h>
int main()
{
    int i;
    int j;
    int n;
    int m;

    printf("Enter this row number: ");
    scanf("%d", &n);

    printf("Enter this colums number: ");
    scanf("%d", &m);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}