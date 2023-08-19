#include <stdio.h>

int fact_recur(int);

int main()
{
	printf("Enter a number: ");
	fflush(stdout);
	int num;
	scanf("%d", &num);
	int fact = fact_recur(num);
	printf("The factorial of %d is: %d\n", num, fact);
	return 0;
}
int fact_recur(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * fact_recur(x - 1);
	}
}
