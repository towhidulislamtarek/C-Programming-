#include <stdio.h>
int main()
{
    int i, j;
    int r, c;
    int a[100][100];
    int b[100][100];
    int sum[100][100];

    printf("Enter this row: ");
    scanf("%d", &r);

    printf("Enter this row number : ");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] - b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}