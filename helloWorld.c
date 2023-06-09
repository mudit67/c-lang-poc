// Calculating simple interest

#include <stdio.h>
int main()
{
    int p, n;
    float r, si;
    p = 1000;
    n = 3;
    r = 8.5;
    /*Formula for simple interest*/
    si = p * n / 100;
    printf("%f \t %d \n", si, p);
    printf("%f\n", si);
    return 0;
}
