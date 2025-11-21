#include <stdio.h>
int main()
{
    int source[100];
    int dest[100];
    int i, n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter elements of source array %d :", i + 1);
        scanf("%d", &source[i]);
    }

    for (i = 0; i < n; i++)
    {
        dest[i] = source[i];
    }

    printf("\nElements of source array are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", source[i]);
    }

    printf("\nElements of dest array are : ");
    for (i = 0; i < n; i++)
    {

        printf("%d\t", dest[i]);
    }

    return 0;
}