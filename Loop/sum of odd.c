#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int sum=0;
    int qum=0;
    scanf("%d",&n);
    while (i<=n) {
    if(i%2==0){
        sum=sum+i;
        i++;
    }
    else {
        qum=qum+i;
       i++;
    }
    }
    printf("Sum of odd:%d\n",sum);
    printf("qum of odd:%d\n",qum);
    return 0;
    }
