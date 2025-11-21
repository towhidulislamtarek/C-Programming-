#include <stdio.h>

void number(int lower, int upper);

int main()
{
    int lower;
    int upper;

    printf("Enter this lower number: ");
    scanf("%d", &lower);
    printf("Enter this upper number: ");
    scanf("%d", &upper);

    printf("All natural number from %d to %d are : ", lower, upper);
    number(lower, upper);

    return 0;
}

void number(int lower, int upper)
{
    if (lower > upper)
    {
        return;
    }

    printf("%d", lower);

    number(lower + 1, upper);
}
