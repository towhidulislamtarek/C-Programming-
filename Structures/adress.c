#include <stdio.h>

struct address
{
    int hourse;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main()
{
    struct address adds[5];

    printf("Enter this hours 1 :  ");
    scanf("%d", &adds[0].hourse);

    printf("Enter this block 1 : ");
    scanf("%d", &adds[0].block);

    printf("Enter this city 1 : ");
    scanf("%s", &adds[0].city);

    printf("Enter this state: 1 ");
    scanf("%s", &adds[0].state);

    printf("\n");

    printf("Enter this hours 2 :  ");
    scanf("%d", &adds[1].hourse);

    printf("Enter this block 2 : ");
    scanf("%d", &adds[1].block);

    printf("Enter this city 2 : ");
    scanf("%s", &adds[1].city);

    printf("Enter this state: 2 ");
    scanf("%s", &adds[1].state);

    printf("\n");

    printf("Enter this hours 3 :  ");
    scanf("%d", &adds[2].hourse);

    printf("Enter this block 3 : ");
    scanf("%d", &adds[2].block);

    printf("Enter this city 3 : ");
    scanf("%s", &adds[2].city);

    printf("Enter this state: 3 ");
    scanf("%s", &adds[2].state);

    printf("\n");

    printf("Enter this hours 3 :  ");
    scanf("%d", &adds[3].hourse);

    printf("Enter this block 3 : ");
    scanf("%d", &adds[3].block);

    printf("Enter this city 3 : ");
    scanf("%s", &adds[3].city);

    printf("Enter this state: 3 ");
    scanf("%s", &adds[3].state);

    printf("\n");

    printf("Enter this hours 3 :  ");
    scanf("%d", &adds[4].hourse);

    printf("Enter this block 3 : ");
    scanf("%d", &adds[4].block);

    printf("Enter this city 3 : ");
    scanf("%s", &adds[4].city);

    printf("Enter this state: 3 ");
    scanf("%s", &adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add)
{
    printf("enter info for person is %d , %d, %s, %s", add.block.)
}