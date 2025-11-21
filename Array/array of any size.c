#include <stdio.h>
int main()
{
    int n;
    int i;
    int arr[n];
    printf("Input the size of the array: ");
    scanf("%d", &n);
    printf("Input %d elements (integer type) in the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
