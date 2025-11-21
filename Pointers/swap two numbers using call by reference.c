#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a;
    int b;

    printf("Enter this 1st number: ");
    scanf("%d", &a);
    printf("Enter this 2nd number: ");
    scanf("%d", &b);

    printf("The 1st number : %d\n", a);
    printf("The 2nd number : %d\n", b);

    printf("\n");

    swap(&a, &b);

    printf("The 1st number : %d\n", a);
    printf("The 2nd number : %d\n", b);

    return 0;
}

void swap(int *a, int *b)
{
    int tem;
    tem = *a;
    *a = *b;
    *b = tem;
}
