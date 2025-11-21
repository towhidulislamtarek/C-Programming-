#include <stdio.h>

int main()
{
    char text[100]; 
    char *str = text;    
    int count = 0;

    printf("Enter any string: ");
    gets(text);

    while (*(str++) != '\0')
    {
        count++;
    }

    printf("Length of '%s' = %d", text, count);

    return 0;
}