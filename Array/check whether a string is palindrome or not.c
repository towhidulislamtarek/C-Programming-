#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char rev[100];

    printf("Enter eny string: ");
    gets(str);

    strcpy(rev, str);
    strrev(rev);

    int flag = strcmp(str, rev);

    if (flag == 0)
    {
        printf("This is palindorme.");
    }

    else
    {
        printf("This is not palindorme.");
    }

    return 0;
}