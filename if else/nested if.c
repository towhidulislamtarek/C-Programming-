#include <stdio.h>
int main()
{
    int a;
    printf("Input this number: ");
    scanf("%d", &a);
    if (a % 5 == 0) // first chack divisable by 5?
    {
        if (a % 3 == 0) // 2nd chack is divisable by 3 or go to else.
        {
            printf("This is divisable by 5 and 3");
        }
        else // 5 is divisavle but not divisavle by 3 . so, else work that.
        {
            printf("This is not divisable by 5 and 3");
        }
    }
    else // do not work that 3 or 5 go to else .
    {
        printf("This is not divisable by 5 and 3");
    }
    return 0;
}