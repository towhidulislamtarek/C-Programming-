#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    float avg;
    printf("Enter the 10 number:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / 10;
    printf("The sum number is %d\n", sum);
    printf("The average number is %.2f", avg);
    return 0;
}