#include <stdio.h>
int main()
{
    int a = 3, b = 4, c = 8;
    float d = c / b % a;
    printf("%f\n", d);
    int base = 5, h = 2;
    int ar = base / 2 * h;
    printf("\n%d\n", ar);
    ar = (base * h) / 2;
    printf("\n%d\n", ar);
}