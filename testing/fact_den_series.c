#include <stdio.h>
// Trying to find sum of the series:- 1/1! + 2/2! + 3/3!.... upto 7 terms
int main()
{
    float fact = 1, sum = 0, term;
    for (float i = 1; i <= 7; i++)
    {

        fact *= i;
        // printf("Fact %f: %f\n", i, fact);
        term = i / fact;
        // printf("term %f: %f\n", i, term);
        sum += term;
        // printf("Sum %f: %f\n\n\n", i, sum);
    }
    printf("Final Sum: %f\n", sum);
    return 0;
}