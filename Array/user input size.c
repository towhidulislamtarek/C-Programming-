#include <stdio.h>
int main()
{
    int n;
    int i;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        printf("The array %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}