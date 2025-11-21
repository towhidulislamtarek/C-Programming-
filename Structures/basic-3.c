#include <stdio.h>

// global structure
struct person
{
    int age;
    float salaray;
};

int main()
{
    struct person person1 = (27,25550.25);
    struct preson person2, person3;
    
    
    person1.age = 27;
    person1.salaray = 12750.6;

    printf("person1 : \n");

    printf("Age = %d\n", person1.age);
    printf("Salary == %d\n", person1.age);

    printf("\n");

    person2.age = 47;
    person2.salaray = 1220.6;

    printf("person2 : \n");

    printf("Age = %d\n", person2.age);
    printf("Salary == %d\n", person2.age);

    return 0;
}