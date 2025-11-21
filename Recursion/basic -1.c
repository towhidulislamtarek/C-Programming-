#include <stdio.h>

void printfHW(int count);

int main()
{
    printfHW(10);
    return 0;
}

void printfHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello world\n");
    printfHW(count - 1);
}