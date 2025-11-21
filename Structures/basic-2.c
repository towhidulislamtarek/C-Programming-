#include <stdio.h>

// global structure
struct person
{
    int age;
    float salaray;
};

int main()
{
    struct person person1, person2;

    printf("Enter information for person1\n");

    printf("Enter  1st age: ");
    scanf("%d",&person1.age);

    printf("Enter 1st salary: ");
    scanf("%f",&person1.salaray);

    printf("\n");

   printf("Enter information for person2\n");

   printf("Enter 2nd age : ");
   scanf("%d",&person2.age);

   printf("Enter 2nd salaray : ");
   scanf("%f",&person2.salaray);

    printf("\n");
    printf("person1 : \n");

    printf("Age = %d\n", person1.age);
    printf("Salary = %d\n", person1.age);

    printf("\n");
    printf("person2 : \n");

    printf("Age = %d\n", person2.age);
    printf("Salary = %d\n", person2.age);

    return 0;
}