#include <stdio.h>
int main()
{
    float a1, a2, a3;
    printf("Enter the three angles of the triangle: ");
    fflush(stdout);
    scanf("%f %f %f", &a1, &a2, &a3);
    float sum = a1 + a2 + a3;
    if (sum == 180)
    {
        printf("It's a valid triangle\n");
        return 0;
    }
    printf("It's not a valid triangle\n");
    return 0;
}