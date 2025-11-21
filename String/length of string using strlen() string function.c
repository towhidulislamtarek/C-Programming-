#include<stdio.h>
#include<string.h>

int main()
{
    char text[100];
    int length;

    printf("Enter this text: ");
    gets(text);

    length = strlen(text);

    printf("The length of string %s = %d",text, length);
}