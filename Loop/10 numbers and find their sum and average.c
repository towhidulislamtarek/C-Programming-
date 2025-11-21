#include <stdio.h>
int main()
{
    int i, num;
    int sum = 0;
    float avg;
    printf("The number of 10 is:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number %d:", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / 10.0;
    printf("The number of 10 is :%d\n", sum);
    printf("The Average of 10 num: %2f\n", avg);
    return 0;
}