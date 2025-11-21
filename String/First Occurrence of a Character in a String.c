#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    int i;
    int flag;

    printf("Enter this string : ");
    gets(str);

    printf("Ener he search chracer: ");
    scanf("%d", &ch);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("We have found the search character %c", ch);
    }
    else
    {
        printf("The first occurrence of the search element %c", ch, i + 1);
    }

    return 0;
}