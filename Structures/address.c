#include<stdio.h>
#include<string.h>

struct address
{
    char name[100];
    double result;
    int roll;
};

int main()
{
   struct address s1;

   strcpy(s1.name, "Ibrahim");
   s1.result = 2.3;
   s1.roll= 23;

   printf("The name is : %s\n",s1.name);
   printf("The result is: %.2f\n",s1.result);
   printf("The roll is : %d\n",s1.roll);
   

}