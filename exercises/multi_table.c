#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    fflush(stdout);
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
        printf("%d X %d = %d\n", num, i, num * i);
    return 0;
}