#include <stdio.h>
int main()
{
	printf("Enter a number: ");
	fflush(stdout);
	int num;
	scanf("%d", &num);
	printf("The number entered is: %d\n", num);
	return 0;
}
// Scanf doesn't register newline when taking input as integer.