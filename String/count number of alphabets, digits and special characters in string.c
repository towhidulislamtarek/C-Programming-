#include <stdio.h>
int main()
{
    char str[100];
    int alphabets = 0;
    int digits = 0;
    int special = 0;
    int i = 0;

    printf("Enter this sstring: ");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
        i++;
    }
    printf("The alphabets is = %d\n", alphabets);
    printf("The digits is = %d\n", digits);
    printf("The special is = %d", special);

    return 0;
}

