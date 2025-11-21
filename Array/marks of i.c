#include <stdio.h>
int main()
{
    int marks[10] = {22, 33, 55, 88, 99, 23, 32, 99, 77, 89};
    int i;

    for (i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d ", i);
        }
    }
    return 0;
}