#include <stdio.h>
int main()
{
    int a;
    int b;
    int ex = 0;

    printf("Enter your first Number:");
    scanf("%d", &a);

    printf("Enter your 2nd number:");
    scanf("%d", &b);

    ex = 2 * (a + b);
    printf("%d", ex);

    return 0;
}