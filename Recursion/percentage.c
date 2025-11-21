#include <stdio.h>

int celcPercentage(int science, int math, int sanskrit);

int main()
{
    int science = 98;
    int math = 95;
    int sanslrti = 99;

    printf("Percentage is : %d", celcPercentage(science, math, sanslrti));
    return 0;
}

int celcPercentage(int science, int math, int sanskrit)
{
    return ((science + math + sanskrit) / 3);
}