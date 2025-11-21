#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int i,j;
    int r,c;
    int k;
    int num;

    printf("Enter this row: ");
    scanf("%d",&r);
    printf("Enter this colum: ");
    scanf("%d",&c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
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
            scanf("%d", &a[i][j]);
        }
    }
    
}