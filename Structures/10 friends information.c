#include <stdio.h>

struct information
{
    char name[50];
    int rollnumber;
    float marks;
};

int main()
{
    int friends;
    printf("Enter this friends number: ");
    scanf("%d", &friends);

    struct information infFriends[friends];

    for (int i = 0; i < friends; ++i)
    {
        printf("\nInter information of friends: %d\n", i + 1);
        printf("Enter Friend name: ");
        scanf("%s", infFriends[i].name);
        printf("Enter Friend Roll number: ");
        scanf("%d", &infFriends[i].rollnumber);
        printf("Enter Friend Marks: ");
        scanf("%f", &infFriends[i].marks);
    }

    printf("\n Friends Information\n");

    for (int i = 0; i < friends; ++i)
    {
        printf("\nInformation of friends: %d\n", i + 1);
        printf("Friend name: %s\n", infFriends[i].name);
        printf("Friend Roll Number: %d\n", infFriends[i].rollnumber);
        printf("Friend Marks: %.2f\n", infFriends[i].marks);
    }
    return 0;
}
