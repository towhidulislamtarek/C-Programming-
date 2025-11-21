#include <stdio.h>
int main()
{
    int i;
    int a;
    int c = 0;
    printf("Enter the value");
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (a == 1)
    {
        printf("neither prime or composite");
    }
    else
    {
        printf("composite number\n");
    }
    return 0;
}