#include <stdio.h>
int main()
{
    int i, j;
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    printf("Enter the number of colums: ");
    scanf("%d",&c);

   int  arr[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}