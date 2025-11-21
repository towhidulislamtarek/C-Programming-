#include <stdio.h>
int main()
{
    int arr[100];
    int i, size;
    int k, temp;
    int j;

    printf("Enter this array size : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter this array %d : ", i + 1);
        scanf("%d", &arr[i]);
        scanf("%d", &k);
    }
    for (j = 0; i < k; j++)
    {
        temp = arr[i];
        for (i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[i] = temp;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}