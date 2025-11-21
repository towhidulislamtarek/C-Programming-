#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest number", a);
        }
        else //(a<c)
        {
            printf("%d is greatest number", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("%d is greatest number", b);
        }
        else //(c>b)
        {
            printf("%d is greatest number", c);
        }
    }

    return 0;
}