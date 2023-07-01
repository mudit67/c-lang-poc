#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year(eg. 2011,1996. in this form only): ");
    fflush(stdout);
    scanf("%d", &year);
    if (year < 1900)
    {
        printf("Invalid year input");
        return 0;
    }
    if (year == 1900)
    {
        printf("Monday\n");
        return 0;
    }
    int year_ = year % 1900;
    int leapYear = year_ / 4;
    if (year_ % 4 == 0)
    {
        leapYear -= 1;
    }
    int day = (year_ + leapYear) % 7;
    if (day == 0)
    {
        printf("Monday\n");
    }
    else if (day == 1)
    {
        printf("Tuesday\n");
    }
    else if (day == 2)
    {
        printf("Wednesday\n");
    }
    else if (day == 3)
    {
        printf("Thursday\n");
    }
    else if (day == 4)
    {
        printf("Friday\n");
    }
    else if (day == 5)
    {
        printf("Saturday\n");
    }
    else
    {
        printf("Sunday\n");
    }
    return 0;
}