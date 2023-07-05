#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, j, sum, last;
    while (i++ < 500)
    {
        j = i;
        sum = 0;
        while (j != 0)
        {
            last = j % 10;
            sum += pow(last, 3);
            j /= 10;
        }
        if (sum == i)
        {
            printf("%d is an Armstrong Number.\n", i);
        }
    }
    return 0;
}