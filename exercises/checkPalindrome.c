#include <stdio.h>
int main()
{
    printf("Enter a 5-digit number: ");
    fflush(stdout);
    int num;
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("Not a 5-digit number\n");
        return 0;
    }
    int num_ = num, num_rev;
    num_rev = (num_ % 10);
    num_ /= 10;
    num_rev = num_rev * 10 + (num_ % 10);
    num_ /= 10;
    num_rev = num_rev * 10 + (num_ % 10);
    num_ /= 10;
    num_rev = num_rev * 10 + (num_ % 10);
    num_ /= 10;
    num_rev = num_rev * 10 + (num_ % 10);
    num_ /= 10;
    if (num_rev == num)
    {
        printf("Yes, the number and its reverse are equal to each other\n");
        return 0;
    }
    printf("No, the number and its reverse are not equal to each other\n");
}