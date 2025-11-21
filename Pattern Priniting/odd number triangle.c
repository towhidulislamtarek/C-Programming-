#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int a = 1;

    printf("Enter this number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}