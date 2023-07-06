#include <stdio.h>
int main()
{
    float total_population = 100000;
    int roundoff;
    for (int i = 1; i <= 10; i++)
    {
        printf("Population at the end of year %d: %f\n", i, total_population);
        total_population *= 1.1;
        roundoff = total_population;
        total_population = roundoff;
    }
    return 0;
}