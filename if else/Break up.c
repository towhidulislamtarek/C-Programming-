include<stdio.h> int main()
{
    int a;
    int b;
    printf("What time will you meet your girlfriend: ");
    scanf("%d", &a);
    printf("When did you go there: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("You care for me a lot\n");
        printf("I love you so much baby");
    }
    else if (a < b)
    {
        printf("You don't love me at all\n");
        printf("Why are you late\n");
        printf("Never try to contact me again");
    }
    else if (a == b)
    {
        printf("Thank you\n");
        printf("You are no late");
    }
    return 0;
}