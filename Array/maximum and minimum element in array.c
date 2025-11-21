#include <stdio.h>
int main()
{
    int a[100];
    int i, n;
    int max, min;

    printf("Enter this array number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter this array %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("The maximum number: %d\n", max);
    printf("The minimum number: %d", min);

    return 0;
}

