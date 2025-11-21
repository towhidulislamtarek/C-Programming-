#include <stdio.h>
int main()
{
    int love;
    printf("Do you love me?\n");
    printf("Yes=2,No=1\n");
    printf("please answer me=");
    scanf("%d", &love);
    if (love % 2 == 0)
    {
        printf("I love you.\n");
        printf("Will you marry me?");
    }
    else
    {
        printf("sorry.\n");
        printf("I will never disturb again.");
    }

    return 0;
}
