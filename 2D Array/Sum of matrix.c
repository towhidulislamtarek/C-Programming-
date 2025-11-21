#include <stdio.h>
int main()
{
    int i, j;
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter the number of colums: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter thsi all element:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Thw sum of the given matrix is: %d", sum);
    return 0;
}