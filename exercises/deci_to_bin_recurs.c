#include <stdio.h>
int toBinaryRecursion(int);
int main()
{
	printf("Enter a number: ");
	fflush(stdout);
	int num;
	scanf("%d", &num);
	int Binary = toBinaryRecursion(num);
	printf("The Binary form of %d is: %d\n", num, Binary);
	return 0;
}
int toBinaryRecursion(int x)
{
	int bin, que, rem, retValue;
	if (x == 1)
	{
		retValue = 1;
	}
	else
	{
		que = x / 2;
		rem = x % 2;
		bin = toBinaryRecursion(que);
		retValue = bin * 10 + rem;
	}
	return retValue;
}