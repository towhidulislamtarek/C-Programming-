#include <stdio.h>
void myfunc(void);

int main()
{
    myfunc();

    return 0;
}

void myfunc(void)
{
    printf("Hello from myfunc!\n");
}