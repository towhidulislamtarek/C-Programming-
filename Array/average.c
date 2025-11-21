#include <stdio.h>
int main()
{
    int arr[10];
    int n;
    int sum = 0;
    int average;

    printf("Enter this array size: ");
    scanf("%d",&n);

    printf("The array is: ");

    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    average = sum / 10;
    printf("The average of given numbers : %d", average);

    return 0;
}
