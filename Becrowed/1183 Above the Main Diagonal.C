#include <stdio.h>
int main()
{
    double a[12][12];
    char x[2];
    scanf("%c", &x);
    int n = 1, i, j;
    int sum;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; i++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; i++)
        {
            sum += a[i][j];
        }
        n++;
    }
    if (x[0] == 's')
    {
        printf("%.1lf\n", sum);
    }
    else if (x[0] == 'm')
    {
        printf("%.1lf\n", sum / 66.0);
    }
    return 0;
}