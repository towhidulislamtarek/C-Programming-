#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    int i;
    int count = 0;

    printf("Enter this string: ");
    gets(str);

    printf("Enter this search element: ");
    scanf("%c", &ch);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)

        {
            count++;
        }
    }
    printf("Character '%c' occurse is: %c\n", ch, i);
    return 0;
}