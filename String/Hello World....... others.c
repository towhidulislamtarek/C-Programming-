#include <stdio.h>
int main()
{
    char arr[] = "I am Towhidul Islam Tarek";
    int i = 0;
    while (arr[i]!='\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}