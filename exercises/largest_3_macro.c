#include <stdio.h>
#define bigger(a, b) (a > b ? a : b)
#define biggest_3(a, b, c) (bigger(a, bigger(b, c)))
int main()
{
	printf("Enter 3 numbers: ");
	fflush(stdout);
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("The biggest number among %d,%d and %d is: %d\n", a, b, c, biggest_3(a, b, c));
	return 0;
}