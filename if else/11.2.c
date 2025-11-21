#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("The number is positive %d\n", a);
    }
    else if (0 > a)
    {
        printf("The number is positive %d\n", a);
    }
    else
    {
        printf("Wrong input");
    }
    return 0;
}
