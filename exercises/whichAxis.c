#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the co-ordinates of the point to check: ");
    fflush(stdout);
    scanf("%d %d", &x, &y);
    if (x == 0)
    {
        if (y == 0)
        {
            printf("The point is at the origin.\n");
            return 0;
        }
        printf("The point lies on x-axis\n");
        return 0;
    }
    if (y == 0)
    {
        printf("The point lies on y-axis.\n");
        return 0;
    }
    printf("The point neither on x-axis nor on y-axis\n");
    return 0;
}