#include <stdio.h>
int main()
{
    int num[] = {10, 20, 35, 40, 50, 46};
    int value, pos = 1, i;
    printf("Enter the value you want to search:");
    scanf("%d", &value);
    for (i = 0; i < 7; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
        if (pos == 1)
        {
            printf("Itens is not found\n");
        }
        else
        {
            printf("The value is found at %d pusition\n", pos);
        }
    }
    return 0;
}