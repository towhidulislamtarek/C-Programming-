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

    if (a < b)
    {
        if (a < c)
        {
            printf("Ram is Youngest man.");
        }
        else//(a>c)
        {
            printf("Ajay is Youngest man.");
        }
    }
    else if (b < a)
    {
        if (b < c)
        {
            printf("Shyam is Youngest man.");
        }
        else //(c>b)
        {
            printf("Ajay is Youngest man.");
        }
    }

    return 0;
}