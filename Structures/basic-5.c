#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int mian()
{
    struct person arr[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Enter this information for person %d\n", i);
        printf("Enter this age: ");
        scanf("%d", &arr[i].age);

        printf("Enter this salary: ");
        scanf("%f", &arr[i].salary);
    }

    for (i = 0; i < 4; i++)
    {
        printf("This information for person %d\n", i);
        printf("Age : %d",arr[i].age);
        printf("Salary : %f",arr[i].salary);
    }
    return 0;
}