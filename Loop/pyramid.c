#include <stdio.h>
int main()
{
    int pyramid, n, r, c;
    printf("Hi!\n");
    printf("I am \"Mr. Coder Saha\"\n\n");

    /// Pattern Name
    printf("1. Right Half Pyramid.\n");
    printf("2. Left Half Pyramid.\n");
    printf("3. Full Pyramid.\n");
    printf("4. Inverted Right Half Pyramid.\n");
    printf("5. Inverted Left Half Pyramid.\n");
    printf("6. Inverted Full Pyramid.\n");
    printf("7. Diamond Pyramid.\n");
    printf("8. Hourglass Pyramid.\n");
    printf("9. Full Pyramid of Star in 180 Degrees.\n");
    printf("10. Full Pyramid of Star in the Opposite Direction of 180 Degrees.\n\n");
    printf("Choice Anyone Pyramid Number: ");
    scanf("%d", &pyramid);

    /// Pattern Codes
    switch (pyramid)
    {
    /// Right Half Pyramid.
    case 1:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nRight Half Pyramid:\n\n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Left Half Pyramid.
    case 2:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nLeft Half Pyramid:\n\n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= n - r; c++)
                printf("  ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Full Pyramid.
    case 3:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nFull Pyramid:\n\n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= n - r; c++)
                printf(" ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Inverted Right Half Pyramid.
    case 4:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nInverted Right Half Pyramid:\n\n");
        for (r = n; r >= 1; r--)
        {
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Inverted Left Half Pyramid.
    case 5:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nInverted Left Half Pyramid:\n\n");
        for (r = n; r >= 1; r--)
        {
            for (c = 1; c <= n - r; c++)
                printf("  ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Inverted Full Pyramid.
    case 6:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nInverted Full Pyramid:\n\n");
        for (r = n; r >= 1; r--)
        {
            for (c = 1; c <= n - r; c++)
                printf(" ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Diamond Pyramid.
    case 7:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nDiamond Pyramid:\n\n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= n - r; c++)
                printf(" ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        for (r = n - 1; r >= 1; r--)
        {
            for (c = 1; c <= n - r; c++)
                printf(" ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Hourglass Pyramid.
    case 8:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nHourglass Pyramid:\n\n");
        for (r = n; r >= 1; r--)
        {
            for (c = 1; c <= n - r; c++)
                printf(" ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        for (r = 2; r <= n; r++)
        {
            for (c = 1; c <= n - r; c++)
                printf(" ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Full Pyramid of Star in 180 Degrees.
    case 9:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nFull Pyramid of Star in 180 Degrees:\n\n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        for (r = n - 1; r >= 1; r--)
        {
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }

    /// Full Pyramid of Star in the Opposite Direction of 180 Degrees.
    case 10:
    {
        printf("Enter Any Number (1 to 9): ");
        scanf("%d", &n);
        printf("\nFull Pyramid of Star in the Opposite Direction of 180 Degrees:\n\n");
        for (r = 1; r <= n; r++)
        {
            for (c = 1; c <= n - r; c++)
                printf("  ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        for (r = n - 1; r >= 1; r--)
        {
            for (c = 1; c <= n - r; c++)
                printf("  ");
            for (c = 1; c <= r; c++)
                printf("* ");
            printf("\n");
        }
        break;
    }
    }

    printf("\n\"Thank You So Much for Given Time\"\n");
    printf("\"Good Luck\"\n");
    return 0;
}