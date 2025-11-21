#include <stdio.h>
int main()
{
    int a;
    int b;
    int c = 0;

    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter number: ");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("%d", c);

    return 0;
}