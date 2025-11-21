#include<stdio.h>
int main()
{
    int i,num,multi;
    printf("Enter multiplication number:");
    scanf("%d", &num);
    for(i=1;i<=10;i++)
    {
        multi=i*num;
        printf("%dX%d=%d\n",num,i,multi);
    }
    return 0;
}
