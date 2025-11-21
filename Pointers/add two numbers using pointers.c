#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter this two number: ");
    scanf("%d %d", ptr1, ptr2);

    sum = *ptr1 + *ptr2;

    printf("%d\n", sum);

    return 0;
}