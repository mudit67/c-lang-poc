#include <stdio.h>
#include <math.h>
int main()
{
    float i, j, diff;
    int cube_limit, cube_pairs, cube_root;
    for (i = 1729; i <= 100000; i++)
    {
        cube_limit = (pow(i, 1.0 / 3.0) + 1);
        cube_pairs = 0;
        for (j = 1; j <= cube_limit; j++)
        {
            diff = i - pow(j, 3);
            if (diff < 0)
                break;
            cube_root = cbrt(diff);
            if ((pow(j, 3) + pow(cube_root, 3)) == i)
                cube_pairs++;
        }
        if (cube_pairs > 2)
        {
            printf("%f is a Hardy-Ramanujan Number\n", i);
        }
    }
    return 0;
}