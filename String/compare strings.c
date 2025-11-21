#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[100];
    int res = 0;

    printf("Enter this 1st string: ");
    gets(text1);

    printf("Enter this 2nd string: ");
    gets(text2);

    res = strcmp(text1, text2);

    if (res == 0)
    {
        printf("Both strings are equal.");
    }
    else if (res == -1)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically gretest than second.");
    }
    return 0;
}