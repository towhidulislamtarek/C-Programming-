#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter this x number: ");
    scanf("%d", &x);
    printf("Enter this y number: ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("The point is origin.");
    }
    else if (x == 0)
    {
        printf("Lest on x-axis.");
    }
    else if (y == 0)
    {
        printf("Lies on y-axis.");
    }
    else
        printf("The point dose not lie on x or y");

    return 0;
}