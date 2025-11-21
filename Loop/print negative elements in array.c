#include <stdio.h>
int main()
{
    int i, n;
    int a[100];
    printf("Enter size of the array :");
    scanf("%d", &n);
    printf("Enter elements in array :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("All negative elements in array are :");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}
