#include <stdio.h>
int whetherLeapYear(int year)
{
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		printf("Leap Year\n");
	else
		printf("Not a leap year.\n");
	return 0;
}
int main()
{
	printf("Enter an year: ");
	fflush(stdout);
	int yr;
	scanf("%d", &yr);
	int a = whetherLeapYear(yr);
	return 0;
}