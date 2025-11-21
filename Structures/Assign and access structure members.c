#include <stdio.h>
#include <string.h>
struct Student
{
    char Fastname[20]; 
    char Lastname[20]; 
    int roll;  
    double point;
};

int main()
{
    struct Student S1, S2,s3,s4,s5,s6,s7;
    
    strcpy(S1.Fastname, "Towhidul");
    strcpy(S1.Lastname, "Islam");
    S1.roll= 406;
    S1.point = 88.89;


    strcpy(S2.Fastname, "Ibrahim");
    strcpy(S2.Lastname, "Islam");
    S2.roll = 124;
    S2.point = 91.56;

    strcpy(s3.Fastname, "Jabid");
    strcpy(s3.Lastname, "Islam");
    s3.roll = 1;
    s3.point = 91.56;

    strcpy(s4.Fastname, "Sara");
    strcpy(s4.Lastname, "Akter");
    s4.roll = 1;
    s4.point = 91.56;

    strcpy(s5.Fastname, "Fatima");
    strcpy(s5.Lastname, "Begum");
    s5.roll = 1;
    s5.point = 91.56;

    strcpy(s6.Fastname, "Faruk");
    strcpy(s6.Lastname, "Ahmed");
    s6.roll = 1;
    s6.point = 91.56;

    strcpy(s7.Fastname, "Masud");
    strcpy(s7.Lastname, "Hammed");
    s7.roll = 1;
    s7.point = 91.56;

    printf("Student details:\n");
    printf("\nFirst name: %s", S1.Fastname);
    printf("\nLast name: %s", S1.Lastname);
    printf("\nSocial security number: %d", S1.roll);
    printf("\nGrade point average: %.3f", S1.point);

    printf("Student details:\n");
    printf("\nFirst name: %s", S2.Fastname);
    printf("\nLast name: %s", S2.Lastname);
    printf("\nSocial security number: %d", S2.roll);
    printf("\nGrade point average: %.3f", S2.point);

    printf("Student details:\n");
    printf("\nFirst name: %s", s3.Fastname);
    printf("\nLast name: %s", s3.Lastname);
    printf("\nSocial security number: %d", s3.roll);
    printf("\nGrade point average: %.3f", s3.point);

    printf("Student details:\n");
    printf("\nFirst name: %s", s4.Fastname);
    printf("\nLast name: %s", s4.Lastname);
    printf("\nSocial security number: %d", s4.roll);
    printf("\nGrade point average: %.3f", s4.point);

    printf("Student details:\n");
    printf("\nFirst name: %s", s5.Fastname);
    printf("\nLast name: %s", s5.Lastname);
    printf("\nSocial security number: %d", s5.roll);
    printf("\nGrade point average: %.3f", s5.point);

    printf("Student details:\n");
    printf("\nFirst name: %s", s6.Fastname);
    printf("\nLast name: %s", s6.Lastname);
    printf("\nSocial security number: %d", s6.roll);
    printf("\nGrade point average: %.3f", s6.point);

    printf("Student details:\n");
    printf("\nFirst name: %s", s7.Fastname);
    printf("\nLast name: %s", s7.Lastname);
    printf("\nSocial security number: %d", s7.roll);
    printf("\nGrade point average: %.3f", s7.point);

    return 0;
}
