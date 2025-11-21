#include <stdio.h>
int main()
{
    int marks[10] = {33, 55, 66, 55, 34, 35, 66, 88, 30};
    int i;
    for (i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d ", marks[i]);
        }
    }
    return 0;
}