#include <stdio.h>
#include <math.h>
int toBinary(int);
int main()
{
	printf("Enter a number: ");
	fflush(stdout);
	int num;
	scanf("%d", &num);
	int binary = toBinary(num);
	printf("The binary version of %d is: %d\n", num, binary);
	return 0;
}
int toBinary(int x)
{
	int bin = 10, quotient, rem, ch = 1;
	while (x != 0)
	{
		quotient = x / 2;
		rem = x % 2;
		bin = rem * pow(10, ch++) + bin;
		x = quotient;
	}
	bin /= 10;
	bin-=1;
	return bin;
}