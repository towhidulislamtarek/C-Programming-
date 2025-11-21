#include <stdio.h>
int main()
{
    int sp;
    int cp;

    printf("Input this Cost price: ");
    scanf("%d", &cp);
    printf("Input this Seling price: ");
    scanf("%d", &sp);

    if (sp > cp) //(sp>cp)is Profit. (seling price>cost price).This is profit.
        printf("This is Profit");

    else if (sp < cp) //(sp<cp) is loss.(seling price<cost price).This is loss.
        printf("This is loss");

    else if (sp == cp) // (sp == cp)is same.(seling price==cost price) is same.No profit and no loss.
        printf("This is no profit and no loss");

    return 0;
}
