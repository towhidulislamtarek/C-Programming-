#include <stdio.h>

struct day
{
    int roll;
    char name[100];
    int day;
    int month;
    int year;
};

int main()
{
    struct day s;

    printf("Enter this student information: ");

    printf("\nEnter this roll number: ");
    scanf("%d", &s.roll);
    printf("Enter this name of student: ");
    scanf("%s", s.name);
    printf("Enter this birthday date: ");
    scanf("%d", &s.day);
    printf("Enter this birthday monts: ");
    scanf("%d", &s.month);
    printf("Enter this birthday yers: ");
    scanf("%d", &s.year);

    printf("The roll number is: %d\n", s.roll);
    printf("The name is : %s\n", s.name);
    printf("The birthday is: %d/%d/%d", s.day, s.month, s.year);

    return 0;
}