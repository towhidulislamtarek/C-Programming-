#include <stdio.h>
struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    int friends;

    printf("Enter the number of students: ");
    scanf("%d", &friends);

    struct Student students[friends];

    for (int i = 0; i < friends; ++i)
    {
        printf("\nEnter information for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < friends; ++i)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
