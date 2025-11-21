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
        for (j = 1; j <= n + 1 - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 1**** 4=j
// 2*** 3=j
// 3** 2=j
// 4 * 1=j
// j= n+1-i;