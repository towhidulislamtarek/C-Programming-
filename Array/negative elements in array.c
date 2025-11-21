#include <stdio.h>
int main()
{
    int arr[100];
    int i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the array %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}