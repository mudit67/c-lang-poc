#include <stdio.h>
int main()
{
    float num;
    printf("Enter the number: ");
    fflush(stdout);
    scanf("%f", &num);
    int num_abs = num;
    if (num == num_abs)
    {
        printf("The absolute value of %f is %d\n", num, num_abs);
        return 0;
    }
    if (num < 0)
    {
        num_abs = num - 1;
        printf("The absolute value of %f is %d\n", num, num_abs);
        return 0;
    }
    printf("The absolute value of %f is %d\n", num, num_abs);
    return 0;
}