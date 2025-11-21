#include <stdio.h>
int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if ((number % 5 == 0) && (number % 11 == 0))
        printf("A number is dividiable by 5 anf 11 ");

    else
        printf("A number is not dividiable by 5 and 11");

    return 0;
}