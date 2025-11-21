#include <stdio.h>
int main()
{
    int i, j;
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
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;
        while (j < k)
        {
            int temo = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temo;
            j++;
            k--;
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; i++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}