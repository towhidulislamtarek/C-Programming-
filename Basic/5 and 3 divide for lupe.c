#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 500; i++)
        if (i % 5 && i % 3 == 0)
        {
            printf("%d\n", i);
        }
    return 0;
}
