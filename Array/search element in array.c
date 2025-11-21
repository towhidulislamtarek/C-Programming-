#include <stdio.h>
int main()
{
    int arr[100];
    int i, size;
    int found;
    int search;

    printf("Enter the array size: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter this array %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);

    found = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("\n %d is the found positive %d", search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }
    return 0;
}

