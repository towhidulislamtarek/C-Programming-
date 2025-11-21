#include<stdio.h>
int main()
{
    int range,i;
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
