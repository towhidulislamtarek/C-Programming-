#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j;
    int f;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j & a[i][j] != 0)
            {
                f = 1;
                break;
            }
            else if (i != j & a[i][j] != 0)
            {
                f = 1;
                break;
            }
        }
    }
    if (f == 0)
    {
        printf("Matrix is identiy Matrix\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix is not identiy matrix\n");
    }
    return 0;
}