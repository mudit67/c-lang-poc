// sum of the digits in a 5 digit number.
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a 5-digit number: ");
    fflush(stdout);
    scanf("%d", &num);
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    printf("The sum of digits is: %d\n", sum);
}