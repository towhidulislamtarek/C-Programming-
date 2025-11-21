#include <stdio.h>
int main()
{
    int n;

    printf("Enter this number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0) //(n%5==0 and n%3==0)mana 5 tar sata hoba abar 3 ar sata hoba 
        printf("This is divisible number");
    else
        printf("This is not divisible number");

    return 0;
}