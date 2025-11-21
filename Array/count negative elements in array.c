#include <stdio.h>
int main()
{
    int arr[100];
    int n, i;
    int count = 0;

    printf("Enter this array number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter this array %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    printf("Enter this negative element:%d\n", count);
    return 0;
}

