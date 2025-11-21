#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter this string: ");
    gets(str);

    printf("Teh original string is %s", str);

    for (i = 0; str[i] != NULL; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] =str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("The toggie case string is %s", str);

    return 0;
}