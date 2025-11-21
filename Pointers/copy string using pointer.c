#include <stdio.h>

int main()
{
    char text1[100];
    char text2[100];
    char *str1 = text1;
    char *str2 = text2;

    printf("Enter any string: ");
    gets(text1);

    while (*(str2++) = *(str1++))
        ;

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}