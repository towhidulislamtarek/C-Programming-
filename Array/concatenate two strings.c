#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[100];

    printf("Enter this 1st element: ");
    gets(text1);

    printf("Enter this 2nd element : ");
    gets(text2);

    strcat(text1, text2);

    printf("Element this : %s", text1);

    return 0;
}