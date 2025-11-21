#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    int i;
    int flag;
    flag = 0;

    printf("Enter this any string: ");
    gets(str);

    printf("Enter the character that you want to search: ");
    scanf("%c", &ch);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Sorry! We have a found the search chanacter '%c'", ch);
    }
    else
    {
        printf("The firs occurrence of the search element %c is position %d", ch, i + 1);
    }
    return 0;
}