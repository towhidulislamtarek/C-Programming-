#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float root1, root2, root3;
    float imaginary;
    float discriminant;

    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    printf("Enter 3rd number: ");
    scanf("%f", &c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }

    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Two equal and roots exists:%.2f and %.2f", root1, root2);
    }

    else if (discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Two ditinct and complex roots exists: %2f+i%,f and %.2f-i%.2f", root1, imaginary, root2, imaginary);
    }

    return 0;
}