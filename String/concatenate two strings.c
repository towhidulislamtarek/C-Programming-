#include <stdio.h>
int main()
{
    char text1[100];
    char text2[100];
    int j = 0;
    int i = 0;

    printf("Enter this 1st string: ");
    gets(text1);

    printf("Enter this 2nd string; ");
    gets(text2);

    while (text1[i] != '\0')
    {
        i++;
    }
    while (text2[j] != '\0')
    {
        text1[i] = text2[j];
        i++;
        j++;
    }
    text1[i] = '\0';
    printf("Concatenated string = %s", text1);

    return 0;
}