#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;

    printf("Enter this number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}