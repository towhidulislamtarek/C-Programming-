#include <stdio.h>
int main()
{
    int text1[100];
    int text2[100];
    int i;

    printf("Enter this 1st string : ");
    gets(text1);

    printf("Enter this 2nd string : ");
    gets(text2);

    for (i = 0; text1[i] != '\0'; i++)
    {
        text2[i] = text1[i];
    }

    text2[i] = '\0';

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);

    return 0;
}