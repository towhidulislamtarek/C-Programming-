#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[100];

    printf("Enter this text: ");
    gets(text1);

    strcpy(text2, text1);

    printf("First string is : %s\n", text1);
    printf("2nd string is : %s\n", text2);

    return 0;
}