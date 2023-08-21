#include <stdio.h>
#include "simpl_int_amount.h"
int main()
{
	printf("Enter the pricipal, duration (number of years) and rate for the simple interest: ");
	fflush(stdout);
	int p, n, r;
	scanf("%d %d %d", &p, &n, &r);
	printf("The interest and amount for the entered values are: %f, %f\n", simpleInterest(p, n, r), amount(p, n, r));
	return 0;
}