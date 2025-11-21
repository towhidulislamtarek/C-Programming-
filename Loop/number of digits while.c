#include <stdio.h>
int main()
{
    int a;
    int c;

    printf("Enter number: ");
    scanf("%d", &a);

    while (a != 0)
    {
        a = a / 10;
        c++;
    }
    printf("The number is %d", c);
    return 0;
}