#include <stdio.h>

int main()
{
    int i, j;
    int r, c;
    int a[100][100];
    int b[100][100];
    int sum[100][100];

    printf("Enter rows: ");
    scanf("%d", &r);

    printf("Enter columns: ");
    scanf("%d", &c);

    printf("\nEnter matrix A elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter matrix B elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
