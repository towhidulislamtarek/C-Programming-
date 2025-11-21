#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    printf("Enter this string: ");
    gets(str);

    printf("String is: %s\n", str);

    return 0;
}