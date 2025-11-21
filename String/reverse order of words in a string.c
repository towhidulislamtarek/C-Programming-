#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reverse[100];
    int len;
    int i;
    int index;
    int wordStart;
    int  wordEnd;
    
    len = strlen(str);
    index = 0;
    wordStart = len - 1;
    wordEnd = len - 1;

    printf("Enter any string: ");
    gets(str);

    while (wordStart > 0)
    {
        if (str[wordStart] == ' ')
        {
            i = wordStart + 1;
            while (i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }
    for (i = 0; i <= wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }
    reverse[index] = '\0';

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}