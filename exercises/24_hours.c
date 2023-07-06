#include <stdio.h>
int main()
{
    for (int i = 1; i <= 24; i++)
    {
        if (i == 12)
            printf("12 Noon\n");
        else if (i == 24)
            printf("12 Midnight\n");
        else if (i > 12)
            printf("%d PM\n", i - 12);
        else
            printf("%d AM\n", i);
    }
    return 0;
}