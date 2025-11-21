#include <stdio.h>
void swap(int a, int b);

int main()
{
    int a;
    printf("Enter this enput: ");
    scanf("%d", &a);

    int b;
    printf("Enter this enput: ");
    scanf("%d", &b);
    swap(a, b);
    printf("The value of a is: %d", a);
    printf("The value of b is : %d", b);
}

void swap(int a, int b)
{
    int tem = a;
    a = b;
    b = temp;
    return;
}
