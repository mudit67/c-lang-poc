#include <stdio.h>
int main()
{
    // for (;) // Gives an error. 2 semi-colons are required.
    for (;;) // Creates an infintite loop.
        printf("sup\n");
    for (;;); // Creates an infintite loop while doing absolutely nothing.
    return 0;
}