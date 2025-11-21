#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int lastDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("The sum of digits is %d", sum);
    return 0;
}