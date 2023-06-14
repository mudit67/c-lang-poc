// Convert catesian co-ordinates to polar co-ordinates.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter the x,y co-ordinates: ");
    fflush(stdout);
    float x, y;
    scanf("%f %f", &x, &y);
    float r = sqrt(x * x + y * y), theta = atan(y / x);
    theta = theta * (180.0 / M_PI);

    printf("The polar co-ordinates are: r = %f\ttheta = %f\n", r, theta);
}