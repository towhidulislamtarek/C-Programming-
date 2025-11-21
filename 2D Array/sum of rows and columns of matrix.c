#include <stdio.h>
int main()
{
    int r, c;
    int i, j;
    int a[100][100];
    int sum = 0;

    printf("Enter this row: ");
    scanf("%d", &r);

    printf("Enter thsi colom: ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; i < c; i++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; i < c; i++)
        {
            sum += a[i][j];
        }
        printf("Sum of elements of Row %d = %d\n", i + 1, sum);
    }
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; i < c; i++)
        {
            sum += a[j][i];
        }
        printf("Sum of elements of Column %d = %d\n", i + 1, sum);
    }
    return 0;
}

