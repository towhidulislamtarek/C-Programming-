#include <stdio.h>
int main()
{
    int a[5];
    int i;
    for (i = 0; i <= 4; i++) //(0,1,2,3,4)
    {

        printf("Enter this numbers %d :", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 4; i >= 1; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}