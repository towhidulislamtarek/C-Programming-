#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    int i;

    printf("Enter this any string: ");
    gets(str);

    printf("Enter character to be search: ");
    scanf("%c",&ch);

    for (i = 0; str[i] > i; i++)
    {
        if (str[i] == ch)
        {
            printf("Cructer is '%c' found to location %d\n", ch, i);
        }
    }
    return 0;
}