#include<stdio.h>
void salam();
void bonjour();

int main()
{
    char ch;
    printf("Enter f for frecah & i for india: ");
    scanf("%c",&ch);

    if(ch=='i')
    {
        salam();
    }
    else
    {
       bonjour();
    }
}
void salam()
{
    printf("Salam\n");
}
void bonjour()
{
    printf("Bonjour\n");
}