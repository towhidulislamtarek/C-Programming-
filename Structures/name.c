#include <stdio.h>
#include <string.h>

struct name
{
    char name[50];
    int noOfopage;
    float price;
};

int main()
{
    struct name a;
    a.noOfopage = 100;
    a.price= 411.5;
    strcpy(a.name, "Tarek");

    printf("Name is : %s\n",a.name);
    printf("Page is :%d\n",a.noOfopage);
    printf("Price is : %f\n",a.price);
   
}
