#include <stdio.h>
int main()
{
    int a[100];
    int i, n;
    printf("Enter input size:");
    scanf("%d", &n);
    printf("Enter array input:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Element of array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}