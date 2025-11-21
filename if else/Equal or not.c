#include <stdio.h>
int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if (number1 == number2)
        printf("number1 and Number 2 equal\n");
    else
        printf("Number1 and Number2 not equal\n ");
    return 0;
}