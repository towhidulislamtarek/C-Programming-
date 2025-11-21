#include <stdio.h>
void englend()
{
    printf("You are in England\n");
    return;
}

void australia()
{
    printf("You are in Australia\n");
    englend();
    return;
}
void india()
{
    printf("You are in India\n");
    australia();
    return;
}
int main()
{
    india();
    return 0;
}