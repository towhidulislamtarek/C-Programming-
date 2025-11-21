#include <stdio.h>

int isprime(int num);
void prime(int lower, int uper);

int main()
{
    int lower;
    int uper;

    printf("Enter this lower: ");
    scnaf("%d", &lower);

    printf("Enter this uper: ");
    scanf("%d", &uper);

    prime(lower, uper);

    return 0;
}

void prime(int lower, int uper)
{
    printf("All prime number between %d to %d are:", lower, uper);
    while (lower <= uper)
    {
        if (isprime(lower))
        {
            printf("%d", lower);
        }
        lower++;
    }
}

int isprime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}