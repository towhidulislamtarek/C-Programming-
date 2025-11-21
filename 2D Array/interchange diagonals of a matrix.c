#include <stdio.h>
int main()
{
    int i, j;
    int r, c;
    int a[100][100];

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
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}