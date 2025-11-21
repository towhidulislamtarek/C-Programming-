#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char ch;
    int i;
    int k=0;

    printf("Enter this string: ");
    gets(str);

    printf("Enter character to be searched: ");
    scanf("%c", &ch);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            k = 1;
            break;
        }
    }
    if(k)
    {
        printf("Character %c is first occurrence at location : %d",ch,i);
    }
    else
    printf("Character is not in the string");

    return 0;
}