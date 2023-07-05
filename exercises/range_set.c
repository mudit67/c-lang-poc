#include <stdio.h>
int main()
{
    printf("Enter the Number of numbers to input: ");
    fflush(stdout);
    int n;
    scanf("%d", &n);
    int i = 0, num, min, max;
    if (n < 3)
    {
        printf("Enter more than 2 numbers.\n");
        return 0;
    }
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);
    // scanf("%d", &num, &min, &max); // This doesn't work
    min = max = num;
    while (++i <= n - 1)
    {
        printf("Enter a number: ");
        fflush(stdout);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    int r = max - min;
    printf("The Range is: %d\n", r);
    return 0;
}