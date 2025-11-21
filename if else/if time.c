#include<stdio.h>
int main()
{
    int time;
    printf("Enter time:");
    scanf("%d",&time);

    if(time%4==0)
    {
        printf("Good morning\n");
        printf("Towhidul islam Tarek");
    }

    else
    {
        printf("sorry\n");
        printf("sleep");
    }

    return 0;
}
