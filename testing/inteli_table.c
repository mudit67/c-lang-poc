#include <stdio.h>
int main()
{
    float x, y, intel;
    printf("x\ty\tIntelligence\n");
    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            intel = 2 + (y + 0.5 * x);
            printf("%f\t%f\t%f\n", x, y, intel);
        }
    }
    return 0;
}