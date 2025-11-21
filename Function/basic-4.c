#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a;
    int b;
    printf("Enter this first number: ");
    scanf("%d", &a);

    printf("Enter this secind number : ");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("Sum is %d",s );

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}