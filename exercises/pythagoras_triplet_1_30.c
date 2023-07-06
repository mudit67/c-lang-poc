#include <stdio.h>
#include <math.h>
int main()
{
    int side1, side2, side3;
    float side3_x;
    for (side1 = 1; side1 <= 30; side1++)
    {
        for (side2 = 1; side2 <= side1; side2++)
        {
            side3_x = sqrt(side1 * side1 + side2 * side2);
            side3 = side3_x;
            if (side3 == side3_x)
                printf("%d, %d, %d are Pythagoras Triplets.\n", side1, side2, side3);
        }
    }
    return 0;
}