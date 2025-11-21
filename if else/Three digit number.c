#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 99 && n < 1000) //(n>99 and n<1000)
    {
        printf("Is is a three digit number");
    }
    else
    {
        printf("It is not a three digit number");
    }
    return 0;
}