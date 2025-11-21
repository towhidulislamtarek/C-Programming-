#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // 1-2+3-4+5-6....n terms
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else if (i % 2 == 0)
        {
            sum = sum - i;
        }
    }
    printf("The sum is : %d", sum);

    return 0;
}