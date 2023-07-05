#include <stdio.h>
int main()
{
    int num, no_neg = 0, no_pos = 0, no_zero = 0;
    char ch = 'y';
    while (ch != 'n')
    {
        printf("\nEnter a number: ");
        // fflush(stdout);
        scanf(" %d", &num);
        if (num < 0)
            no_neg++;
        else if (num > 0)
            no_pos++;
        else
            no_zero++;
        printf("Enter n to discontinue or anything else to continue: ");
        // fflush(stdout);
        scanf(" %c", &ch);
        // fflush(stdin);
    }
    printf("\nNumber of negative numbers: %d\n", no_neg);
    printf("Number of Zeros: %d\n", no_zero);
    printf("Number of positive numbers: %d\n", no_pos);
    return 0;
}