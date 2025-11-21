#include <stdio.h>

int main()
{
    int i, j;
    int r, c;

    printf("Enter number of rows :");
    scanf("%d", &r);
    printf("Enter number of columns :");
    scanf("%d", &c);

    int a1[100][100];
    int a2[100][100];
    int add[100][100];

    printf("Enter 1st matrix is : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", (*(a1 + i) + j));
        }
    }
    // Taking input for 2nd matrix
    printf("Enter 2nd matrix is : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", (*(a2 + i) + j));
        }
    }
    // Addition of matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            *(*(add + i) + j) = *(*(a1 + i) + j) + *(*(a2 + i) + j);
        }
    }

    printf("Addition of above matrices is\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", *(*(add + i) + j));
        }

        printf("\n");
    }
    return 0;
}
