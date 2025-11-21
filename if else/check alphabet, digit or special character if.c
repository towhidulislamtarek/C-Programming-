#include <stdio.h>
int main()
{
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("This is a Alphabet");

    if (ch >= '0' && ch <= '9')
        printf("This is Digit");

    else
        printf("This is special character");

    return 0; 
}