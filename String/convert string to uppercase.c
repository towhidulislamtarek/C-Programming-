#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter your text : ");
    gets(str);

    strupr(str);

    printf("Uppercase string : %s", str);

    return 0;
}