#include <stdio.h>
int main()
{
    int i;
    printf("Enter year");
    scanf("%d", &i);
    if (i % 400 == 0)
        printf("Years is leap year\n");
    else if (i % 100 == 0)
        printf("Years is not leap year\n");
    else if (i % 4 == 0)
        printf("Year is leap year\n");
    else
        printf("Years is not leap Year\n");
    return 0;
}