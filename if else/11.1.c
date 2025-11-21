#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("b is the maximum number %d", b);
    }
    else if (a > b)
    {
        printf("a is the maximum number %d", a);
    }
    else
    {
        printf("The input is wrong");
    }
    return 0;
}
