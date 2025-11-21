#include <stdio.h>
int main()
{
    int arr[1000];
    int i, n;

    printf("Enter array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the array number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}