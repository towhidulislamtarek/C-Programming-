#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    scanf("%[^\n]", str);

    printf("%s", str); // full sentence
    return 0;
}