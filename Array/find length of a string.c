#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;

    printf("Enter this element: ");
    gets(str);

    length = strlen(str);

    printf("Length of '%s'= %d", str, length);

    return 0;
}