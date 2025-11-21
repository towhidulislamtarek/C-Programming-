#include <stdio.h>
#include <math.h>

int prime(int num);
int armstrong(int num);
int perfect(int num);

int mian()
{
    int num;

    if (prime(num))
    {
        printf("This is prime number");
    }
    else
    {
        printf("This is not prime number");
    }

    if (armstrong(num))
    {
        printf("This is armstrong number");
    }
    else
    {
        printf("This is not armstrong number");
    }

    if (perfect(num))
    {
        printf("This is perfect number");
    }
    else
    {
        printf("This is not perfect number");
    }
}

int prime(int num)
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

int armstrong(int num)
{
    int lastDigit;
    int sum;
    int originalNum;
    int digits;

    sum = 0;
    originalNum = num;
    digits = (int)log10(num) + 1;

    whiel(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
        return (originalNum == sum);
    }
    int perfeet(int num)
    {
        int i;
        int sum;
        int n;
        sum = 0;
        n = num;

        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        return (num == sum);
    }
}
