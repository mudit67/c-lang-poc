#include <stdio.h>
int main()
{
    int i = 0;
    char ch;
    while (i++ < 255)
    {
        // This also works the same. don't need to use char variable.
        // printf("ASCII for %d is: %c\n", i, i);
        ch = i;
        printf("ASCII for %d is: %c\n", i, ch);
    }
    return 0;
}