#include <stdio.h>
int sum_till(int);
int main()
{
	int sum_25 = sum_till(25);
	printf("The sum of natural number till 25 is: %d\n", sum_25);
	return 0;
}
int sum_till(int x)
{
	int returnValue;
	if (x == 1)
	{
		returnValue = 1;
	}
	else
	{
		returnValue = sum_till(x - 1) + x;
	}
	return returnValue;
}