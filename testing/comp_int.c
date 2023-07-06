#include <stdio.h>
#include <math.h>
int main()
{
    float p, n, r, q, amt;
    for (int i; i <= 10; i++)
    {
        printf("Enter the values for p,n,r,q: ");
        fflush(stdout);
        scanf("%f %f %f %f", &p, &n, &r, &q);
        amt = pow(p * (1 + r / q), n * q);
        printf("Amount: %f\n", amt);
    }
    return 0;
}