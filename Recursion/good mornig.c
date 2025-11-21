#include <stdio.h>
void greeting(int n);

int main()
{
    int n;
    printf("Enter this number: ");
    scanf("%d", &n);
    greeting(n);
    return 0;
}

void greeting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Good morning\n");
    }
    return;
}