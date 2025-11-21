#include <stdio.h>
int main()
{
    int n;
    printf("Enter this number: ");
    scanf("%d", &n);

    if (n >= 91 && n <= 100)
        printf("Excellent");
    else if (n >= 81 && n <= 90)
        printf("Vary good");
    else if (n >= 71 && n <= 80)
        printf("Good");
    else if (n >= 61 && n <= 70)
        printf("Can do better");
    else if (n >= 51 && n <= 60)
        printf("Average");
    else if (n >= 41 && n <= 50)
        printf("Below Average");
    else if (n <= 40)
        printf("Fall");

    return 0;
}