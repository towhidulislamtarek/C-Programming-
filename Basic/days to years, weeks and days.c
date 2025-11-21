#include <stdio.h>
int main()
{
    int days;
    int weeks;
    int years;

    printf("Enter Days: ");
    scanf("%d", &days);

    years = (days / 365);
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Years is: %d\n", years);
    printf("Weeks is: %d\n", weeks);
    printf("Days is: %d", days);

    return 0;
}
