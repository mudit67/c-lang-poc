// Calculate simple interest of values taken from the user

#include <stdio.h>
int main()
{
    int p, n;
    float r, si;

    // Lines written in the book.
    // printf("Enter the values of p,n,r");
    // scanf("%d %d %f", &p, &n, &r); // For this to work the values have to separated by a space, a tab or a newline

    printf("Enter the principal amount: ");
    // Will have to use fflush(stdout) to "flush" out all the data in the output buffer
    // input and output have different bufferstreams
    fflush(stdout);

    scanf("%d", &p);

    printf("Enter the number of years: ");

    fflush(stdout);

    scanf("%d", &n);

    printf("Enter the rate of interest: ");

    fflush(stdout);

    scanf("%f", &r);

    si = p * n * r / 100;
    printf("\n\nThe simple interest is: %f\n", si);
    return 0;
}