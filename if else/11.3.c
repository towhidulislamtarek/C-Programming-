#include <stdio.h.>
int main()
{
    int s;
    printf("Enter the number");
    scanf("%d", &s);
    if (s % 11 == 0 && s % 5 == 0)
    {
        printf("The number is divisible by both 11 and 5");
    }
    else
    {
        printf("The number is nit divisible by 11 and 5");
    }
    return 0;
}
