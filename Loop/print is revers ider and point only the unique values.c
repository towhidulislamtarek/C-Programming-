#include <stdio.h>
int main()
{
    int a[100];
    int i, j, c;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    printf("unique number\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[j])
            c++;
    }
    if (c == 0)
    {
        printf("%d\n", a[i]);
        c = 0;
    }
    return 0;
}