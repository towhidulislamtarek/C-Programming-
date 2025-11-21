#include<stdio.h>

int fact(int n);

int main()
{
  int result= fact(5);
  printf("Factorial is 5 = %d,result");


}

int fact (int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
         return n*fact (n-1);
    }
}