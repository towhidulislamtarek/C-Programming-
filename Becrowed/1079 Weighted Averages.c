#include <stdio.h>
int main()
{
    float a, b, c, i, n, s = 0, av = 0;
    scanf("%f", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        s = a * 2 + b * 3 + c * 5;
        av = s / 10;
        printf("%.1f", av);
    }
    return 0;
}