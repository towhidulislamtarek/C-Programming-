#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int rollNumber;
    char name[50];
    struct Date birthDate;
};
struct Complex
{
    float real;
    float imaginary;
};
struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}
void displayComplex(struct Complex num)
{
    printf("%.2f + %.2fi\n", num.real, num.imaginary);
}

int main()
{
    struct Date birthday1 = {15, 7, 2000};
    struct Date birthday2 = {20, 5, 1998};

    struct Student student1 = {101, "John Doe", birthday1};
    struct Student student2 = {102, "Jane Smith", birthday2};

    printf("Student 1 Details:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Birthdate: %d/%d/%d\n", student1.birthDate.day, student1.birthDate.month, student1.birthDate.year);

    printf("\nStudent 2 Details:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Birthdate: %d/%d/%d\n", student2.birthDate.day, student2.birthDate.month, student2.birthDate.year);

    struct Complex num1 = {3.5, 2.0};
    struct Complex num2 = {1.5, 4.0};

    struct Complex sum = addComplex(num1, num2);

    printf("\nSum of Complex Numbers:\n");
    printf("Result: ");
    displayComplex(sum);

    return 0;
}
