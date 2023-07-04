#include <stdio.h>
int main()
{
    printf("Enter a Year: ");
    fflush(stdout);
    int year;
    scanf("%d", &year);
    int con = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
    con ? printf("A Leap Year\n"):printf("Not a Leap Year\n");
    return 0;
}