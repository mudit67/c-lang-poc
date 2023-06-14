// consider a systerm of bank notes of denomination Rs. 1,2,5,10,50,100. Write a program to compute the smallest number of bank notes to make up money entered by user.

#include <stdio.h>
int main()
{
    int N, no_100, no_50, no_10, no_5, no_2, no_1, sum;
    printf("Enter the amount of money: ");
    fflush(stdout);
    scanf("%d", &N);

    no_100 = N / 100;
    N %= 100;
    no_50 = N / 50;
    N %= 50;
    no_10 = N / 10;
    N %= 10;
    no_5 = N / 5;
    N %= 5;
    no_2 = N / 2;
    N %= 2;
    no_1 = N;

    sum = no_100 + no_50 + no_10 + no_5 + no_2 + no_1;

    printf("Number of 100Rs. notes.: %d\nNumber of 50Rs. notes: %d\nNumber of 10Rs. notes: %d\nNumber of 5Rs. notes: %d\nNumber of 2Rs. notes: %d\nNumber of 1Rs. Notes: %d\nSum of number of notes: %d\n\n", no_100, no_50, no_10, no_5, no_2, no_1, sum);
}