#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    int i;
    printf("Enter this sixe of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter ther array element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        printf("Array element is :%d", arr[i]);
    }
    for (i =n- 1; i > 0; i--)
    {
        printf("The reverse array is: %d\n", arr[i]);
    }

    return 0;
}