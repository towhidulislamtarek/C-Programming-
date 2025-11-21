#include <stdio.h>
int main()
{
    int n;
    int a = 1;
    int b = 1;
    int i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The fibonacc is %d", n, sum);
    return 0;
}