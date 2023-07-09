#include <stdio.h>
int main()
{
    int i = 2;
    switch (i)
    {
    case 1:
        printf("Case 1\n");
    case 2:
        printf("Case 2\n");
        continue;
    default:
        printf("Default case\n");
    case 3:
        printf("Case 3\n");
    }
    return 0;
}