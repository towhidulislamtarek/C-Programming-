#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char revers[100];

    int flag;

    printf("Enter this text: ");
    gets(str);

    strcpy(revers, str); // string copy
    strrev(revers);      // Finds the reverse of string

    flag = strcmp(str, revers); // Checks whether both are equal or not

    if (flag == 0)
    {
        printf("String is palindnom");
    }
    else
    {
        printf("String is not palindom");
    }
    return 0;
}