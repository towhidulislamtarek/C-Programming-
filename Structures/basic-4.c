#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 2332;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Tarek");

    printf("Student name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 2332;
    s2.cgpa = 9.8;
    strcpy(s2.name, "Tarek");

    printf("Student name = %s\n", s2.name);
    printf("Student roll no = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 2332;
    s3.cgpa = 9.8;
    strcpy(s3.name, "Tarek");

    printf("Student name = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);

    return 0;
}