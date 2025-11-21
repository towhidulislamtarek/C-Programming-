#include <stdio.h>
int mian()
{
    int x = 10, y=20, sum;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;

    printf("The sum = %d\n", sum);

    return 0;
}