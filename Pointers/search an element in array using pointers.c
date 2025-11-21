#include<stdio.h>
int main()
{
    int n;
    int i;
    int arr[100];
    int *ptr;

    printf("Enter this array size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter this array element: ");
        scanf("%d",&arr[i]);
    }

    ptr = &arr[n-1];
    for(i=0;i<n;i++)
    {
        printf("%d\n",*ptr);
    }

}