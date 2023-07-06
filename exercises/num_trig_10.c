#include <stdio.h>
int main()
{
    int num = 1, i, j;
    for (i = 4; i >= 1; i--)
    {
        // Left Margin
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
            fflush(stdout);
        }
        // The actual numbers.
        for (j = 2 * (4 - i) + 1; j >= 1; j--)
        {
            if (j % 2 == 0)
            {
                printf(" ");
                fflush(stdout);
            }
            else
            {
                printf("%d", num++);
                fflush(stdout);
            }
        }
        printf("\n");
        fflush(stdout);
    }
    return 0;
}