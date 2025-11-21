#include <stdio.h>
int main()
{
    char str[100];
    int word;
    int i;
    i = 0;
    word = 1;

    printf("Enter this string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            word++;
        }
        i++;
    }

    printf("Count number of word in string = %d", word);

    return 0;
}