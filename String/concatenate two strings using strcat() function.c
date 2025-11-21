#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[100];

    printf("Enter this 1st text: ");
    gets(text1);

    printf("Enter this 2nd trxt: ");
    gets(text2);

    strcat(text1, text2);

    printf("concatenate two string is : %s", text1);

    return 0;
}