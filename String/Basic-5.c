#include <stdio.h>
int main()
{
    char str[5] = "Tarek";
    str[1]='r';
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}