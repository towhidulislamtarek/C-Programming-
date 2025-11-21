#include <stdio.h>
int main()
{
    int arr[100];
    int size, pos;
    int i;

    printf("Enter this array size: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter this array %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter delete number: ");
    scanf("%d", &pos);

    for (i = pos - 1; i <= size + 2; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}