#include <stdio.h>

void togglccare(char *str);

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    printf("String after togglecave case: %s", str);
    togglccare(str);

    printf("String after togglins ease: %s", str);

    return 0;
}

void togglccare(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i >= 'a'] && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}