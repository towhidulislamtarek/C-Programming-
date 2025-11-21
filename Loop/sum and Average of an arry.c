#include <stdio.h>
int main()
{

    int a[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    float avg = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        avg = sum / 5;
    }
    printf("The sum is: %d\n", sum);
    printf("The average:%f\n", avg);

    return 0;
}