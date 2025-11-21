#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[100];
    int res;

    printf("Enter farst string: ");
    gets(text1);
    printf("Enter 2nd string: ");
    gets(text2);

    res = strcmp(text1, text2);

    if (res == 0)
    {
        printf("Both string are equal");
    }
    else if (res == -1)
    {
        printf("First string in lexicogrcphicaly smiller the scond");
    }

    else
    {
        printf("First string is lexicogrcphicaly greater the scond");
    }

    return 0;
}