#include <stdio.h>

int main()
{
    int a, i;
    printf(" 5 to 20 Multiplication Table=\n");
    for (a = 5; a <= 20; a++)
        for (i = 1; i <= 10; i++)
            printf("%d*%d=%d\n", a, i, a * i);

    return 0;
}
