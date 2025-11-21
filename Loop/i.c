#include <stdio.h>
int main()
{
    int r, c, space;
    for (r = 1; r <= 5; r++)
    {
        /// I
        for (space = 1; space <= 1; space++)
            printf("     ");
        for (c = 1; c <= 3; c++)
            if (r == 1 || r == 5 || c == 2)
                printf("* ");
            else
                printf("  ");

        /// Love Symbol
        for (space = 1; space <= 1; space++)
            printf("  ");
        for (c = 1; c <= 5; c++)
            if (r == 1 & (c == 2 || c == 4) || r == 2 && (c == 1 || c == 3 || c == 5) || r == 3 && (c == 1 || c == 5) || r == 4 && (c == 2 || c == 4) || r == 5 && c == 3)
                printf("* ");
            else
                printf("  ");

        /// U
        for (space = 1; space <= 1; space++)
            printf("  ");
        for (c = 1; c <= 5; c++)
            if ((r == 1 || r == 2 || r == 3 || r == 4) && (c == 1 || c == 4) || r == 5 && (c == 2 || c == 3))
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}