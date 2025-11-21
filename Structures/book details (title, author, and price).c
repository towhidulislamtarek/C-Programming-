#include <stdio.h>

struct book
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    struct book book[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter this information %d:", i + 1);

        printf("\nEnter this title: ");
        scanf("%s", book[i].title);
        printf("Enter this author: ");
        scanf("%s", book[i].author);
        printf("Enter this price: ");
        scanf("%f", &book[i].price);
    }

    for (i = 0; i < 3; i++)
    {
        printf("This information %d:", i + 1);

        printf("\nThis title: ");
        printf("%s\n", book[i].title);
        printf("This author: ");
        printf("%s\n", book[i].author);
        printf("This price: ");
        printf("%f\n", book[i].price);
    }
}