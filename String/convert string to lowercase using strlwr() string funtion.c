#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter this string: ");
    gets(str);

    strlwr(str);

    printf("Convert string to lowercase %s", str);

    return 0;
}