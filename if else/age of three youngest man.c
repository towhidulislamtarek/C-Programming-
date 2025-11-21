#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter the Ram age: ");
    scanf("%d", &a);
    printf("Enter the Shyam age: ");
    scanf("%d", &b);
    printf("Enter the Ajay age: ");
    scanf("%d", &c);

    if (a < b && a < c)
        printf("Ram is youngest man");

    else if (b < a && b < c)
        printf("Shayam is youngest man");

    else if (c < a && c < b)
        printf("Ajay is youngest man");

    return 0;
}