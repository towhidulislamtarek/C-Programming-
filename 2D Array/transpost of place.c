#include <stdio.h>
int main()
{
    int i,j;
    int r, c;
    int n;
    printf("Enter this size of rows/ colums : ");

    printf("Enter all the elements:\n");
    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           printf("%d",arr[i][j]);

        }
        printf("\n");
    }
}