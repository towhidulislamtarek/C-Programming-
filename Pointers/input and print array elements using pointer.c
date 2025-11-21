#include <stdio.h>
int main()
{
    int arr[100];
    int i, n;
    int *ptr = arr;

    printf("Enput array element is : ");
    scanf("%d", &n);

    printf("Enter this element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", i[ptr]);
    }
    return 0;
}