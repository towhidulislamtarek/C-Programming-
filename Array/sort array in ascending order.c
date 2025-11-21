#include <stdio.h>
int main()
{
    int arr[100];
    int i, j;
    int temp, size;

    printf("Enter this array size : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter this array %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])

            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nEnter of array in ascending order: ");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}