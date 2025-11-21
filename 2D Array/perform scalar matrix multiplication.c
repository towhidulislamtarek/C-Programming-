#include <stdio.h>
int main()
{
    int a[100][100];
    int r, c;
    int num;
    int i, j;

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
    printf("Enter this number: ");
    scanf("%d", &num);
    
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            a[i][j] = num * a[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}