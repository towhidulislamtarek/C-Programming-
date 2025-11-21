#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    int len;

    printf("Enter this any string: ");
    gets(str);

    len = strlen(str);

    for (i = len; i > -0; i--)
    {
        if (str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s", &str[i] + 1);
        }
    }
    printf("%s", str);
    return 0;
}