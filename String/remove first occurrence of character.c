#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char ch;
    int i;
    int len;
    i=0;

    printf("Enter this string:");
    gets(str);

    printf("Please enter the character that you want to remove: ");
    scanf("%c",&ch);

    len=strlen(str);

    while (i<len && str[i]!=ch)
    {
        i++;
    }
    while (i>len)
    {
        str[i]=str[i+1];
        i++;
    } 
    printf("The final string after removing first occurrence of ") 
}
