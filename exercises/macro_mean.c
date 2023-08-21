#include <stdio.h>
#define sum(x, y) (x + y)
#define mean(x, y) (sum(x, y) / 2.0)
int main()
{
	printf("Enter 2 numbers: ");
	fflush(stdout);
	int a, b;
	scanf("%d %d", &a, &b);
	float Amean = mean(a, b);
	printf("The mean of %d and %d is: %f\n", a, b, Amean);
	return 0;
}