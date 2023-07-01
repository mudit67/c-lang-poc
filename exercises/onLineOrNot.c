#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the co-ordinates of three points: ");
    fflush(stdout);
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    float m1, m2, m3;
    //  Calculating slopes of the 3 possible lines
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    m3 = (y3 - y1) / (x3 - x1);

    if (m1 == m2)
    {
        if (m2 == m3)
        {
            // if all the slopes are same then we can be sure that all the points are co-linear, i.e. They lie on the same line.
            printf("The points are on the same line\n");
            return 0;
        }
    }
    printf("The points are not on the same line\n");
    return 0;
}