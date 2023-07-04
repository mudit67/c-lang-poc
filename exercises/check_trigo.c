#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter an angle in degrees: ");
    fflush(stdout);
    float angle;
    scanf("%f", &angle);
    // angle = angle / 180 * M_PI;
    float sinx = sin(angle);
    float cosx = cos(angle);
    float sum_trig = sinx * sinx + cosx * cosx;
    printf("%f\n", sinx);
    if (sum_trig == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}