#include <stdio.h>
#include <string.h>

struct initialize
{
   char arr[100];
   int id;
   float salary;
};


int main()
{
    struct initialize s1;

    strcpy(s1.arr, "Mike");
    s1.id = 1120;
    s1.salary = 7690.266;

    printf("The name is :%s\n", s1.arr);
    printf("The id is : %d\n", s1.id);
    printf("The salary is :%.3lf\n", s1.salary);

    return 0;
}