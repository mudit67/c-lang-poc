#include <stdio.h>
#include <math.h>
// Natural Log Series
int main()
{
    float term = 1, sum = 0;
    printf("Enter a number: ");
    fflush(stdout);
    float x;
    scanf("%f", &x);
    // term = ((x - 1) / x);
    // sum = term;
    for (int i = 1; i <= 7; i++)
    {
        term *= ((x - 1) / x);
        sum += term / i;
    }
    printf("Natural log of %f: %f\n", x, sum);
    return 0;
}