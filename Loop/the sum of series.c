#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter max sum of series;");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("The sum of series:");
    for (i = 1; i < n; i++)
    {
        if(i!=0)
            printf("%d + ", i);
            else
            printf("%d=%d",i);
    }
}