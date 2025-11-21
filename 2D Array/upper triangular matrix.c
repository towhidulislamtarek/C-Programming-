#include <stdio.h>
int main()
{
    int i, j;
    int r, c;
    printf("Enter this size of rows: ");
    scanf("%d", &r);

    printf("Enter this size of colums: ");
    scanf("%d", &c);

    int arr[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}