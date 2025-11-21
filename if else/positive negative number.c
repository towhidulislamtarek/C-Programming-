#include<stdio.h>
int main()
{
    int n;
    printf("Enter any value: ");
    scanf ("%d", &n);

    if (n >=0)//positive (n>=0)or negative (n<=0)
        {
            printf (" The number is positive\n");

        }
            else {
                printf("This number is Negative\n");

            }
            return 0;
}
