#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000];

    scanf("%s", input);

    int length = strlen(input);

    char currentChar = input[0];
    int count = 1;

    for (int i = 1; i <= length; i++)
    {
        if (input[i] == currentChar)
        {
            count++;
        }
        else
        {
            printf("%c", currentChar);
            if (count > 1)
            {
                printf("%d", count);
            }
            count = 1;
            currentChar = input[i];
        }
    }

    printf("\n");

    return 0;
}
