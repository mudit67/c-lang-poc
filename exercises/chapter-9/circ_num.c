#include <stdio.h>
int rotate_numbers(int *, int *, int *);
int main()
{
	printf("Enter three numbers: ");
	fflush(stdout);
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("The numbers are: a=%d, b=%d, c=%d \n", a, b, c);
	fflush(stdout);
	rotate_numbers(&a, &b, &c);
	printf("The numbers are: a=%d, b=%d, c=%d \n", a, b, c);
	fflush(stdout);
	return 0;
}
int rotate_numbers(int *x, int *y, int *z)
{
	int k = *x;
	*x = *z;
	*z = *y;
	*y = k;
}