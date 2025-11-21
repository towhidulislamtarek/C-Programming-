#include <stdio.h>
int main()
{
    int n, m, o;
    int max = 0;

    printf("Teacher provied number: ");
    scanf("%d %d %d", &n, &m, &o);

    if (m > n && m > o)
        max = m;

    else if (n > o && n > m)
    {
        max = n;
    }

    else if (o > n && o > m)
        max = o;

    printf("%d\n", max);

    if (max >= 40)
        printf("pass\n");
    else
        printf("fall\n");

    return 0;
}