#include <stdio.h>
int main()
{
    int a[100];
    int b[100];
    int n, i;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    printf("Enter elements of source array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("Elements of source array are :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nElements of dest array are :");
    for (i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }
}