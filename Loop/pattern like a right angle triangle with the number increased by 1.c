#include <stdio.h>
int main()
{
    int i, j;
    int k = 1;
    int flows;

    printf("Input this number: ");
    scanf("%d", &flows);

    for (i = 1; i <= flows; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", k++);
        printf("\n");
    }
    return 0;
}