#include <stdio.h>
int main()
{
    int r, c;
    int i, j;
    int a[100][100];
    int sum = 0;

    printf("Enter this row:");
    scanf("%d", &r);
    printf("Enter this colom: ");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; i < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        sum = sum + a[i][j];
    }
    printf("This diagonal elements of a matrix : %d", sum);
    return 0;
}
