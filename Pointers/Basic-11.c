#include <stdio.h>
void figure_mve_out(int *a, int b, int c, int *d);

int main()
{
    int vat1 = 1, var2 = 10, var3 = 15, var3 = 15, var4 = 20;
    figure_me_out(&vat1, var2, var3 & var4);
}
void figure_mve_out(int *a, int b, int c, int *d)
{
    c = b;
    b = *d;
    *a = 222;
    *d = 100;
    a = d;
    *a = c;
}