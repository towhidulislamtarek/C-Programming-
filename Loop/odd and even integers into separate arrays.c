#include <stdio.h>
int main()
{
    int i, size;
    printf("input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    int a[size];
    printf("input elements in the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even number:\n");
    for (i = 0; i < size; i++)
    {
        if (a[i >= 0])
        {
            if (a[i] % 2 == 0)
                printf("%d\n", a[i]);
        }
        printf("Odd Number");
        for (i = 0; i < size; i++)
        {
            if (a[i] >= 0)
            {
                if (a[i] % 2 == 1)
                    printf("%d\n", a[i]);
            }
        }
    }
    return 0;
}
