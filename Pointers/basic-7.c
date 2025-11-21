#include <stdio.h>
int mian()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);

    return 0;
}