#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum is: %d", sum); // 1+2+3+4......n

    return 0;
}