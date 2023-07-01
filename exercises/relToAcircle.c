#include <stdio.h>
#include <math.h>
int main()
{
    // Defining the co-ordinates of the centre of the circle
    int x = 0, y = 0;
    int radius = 5;
    int x1, y1;
    printf("Enter the co-ordinates of the point to check: ");
    fflush(stdout);
    scanf("%d %d", &x1, &y1);
    float dist = sqrt(pow((y1 - y), 2) + pow((x1 - x), 2));
    if (dist < radius)
    {
        printf("The point is inside the circle.\n");
        return 0;
    }
    if (dist == radius)
    {
        printf("The point is on the circle.\n");
        return 0;
    }
    printf("The point is outside the circle.\n");
    return 0;
}