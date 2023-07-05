#include <stdio.h>
int main()
{
    printf("Enter a Number: ");
    fflush(stdout);
    int num;
    scanf("%d", &num);
    int num_ = num, i = 1, octal = 0;
    while (num_ != 0)
    {
        octal = (num_ % 8) * i + octal;
        num_ /= 8;
        i *= 10;
    }
    printf("The Octal Number for %d is: %d\n", num, octal);

    return 0;
}