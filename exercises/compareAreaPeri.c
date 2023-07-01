#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter the length and breadth of the reactangle: ");
    fflush(stdout);
    scanf("%d %d", &l, &b);
    int area = l * b, peri = 2 * (l + b);
    if (area > peri)
    {
        printf("Area is greater than perimeter\n");
        return 0;
    }
    if (area == peri)
    {
        printf("Area is equal to perimeter\n");
        return 0;
    }
    printf("Area is smaller than perimeter\n");
    return 0;
}