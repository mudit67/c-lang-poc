// Write a program to input 2 numers and interchanges their values.

#include <stdio.h>

int main()
{
    printf("Enter twp numers: ");
    int a, b;
    fflush(stdout);
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of 1st input is: %d\nThe value of 2nd input is: %d\n", a, b);
}