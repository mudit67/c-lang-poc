#include <stdio.h>
#define abs(x) (x >= 0 ? x : x * -1)
int main()
{
	printf("Enter a number: ");
	fflush(stdout);
	int num;
	scanf("%d", &num);
	printf("The absolute value of %d is: %d\n", num, abs(num));
	return 0;
}