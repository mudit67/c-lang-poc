#include <stdio.h>
int primeFactor(int);
int isPrime(int);
int num;
int main()
{
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("The prime factors of %d are: ", num);
	fflush(stdout);
	int a = primeFactor(num);
	return 0;
}
int primeFactor(int x)
{
	for (int i = 2; i <= x; i++)
	{
		if (x % i == 0)
		{
			if (isPrime(i))
			{
				if (i != num)
				{

					printf("%d, ", i);
					fflush(stdout);
					primeFactor(x / i);
					return 0;
				}
			}
		}
	}
	return 0;
}
int isPrime(int y)
{
	for (int j = 2; j < y; j++)
	{
		if (y % j == 0)
			return 0;
	}
	return 1;
}