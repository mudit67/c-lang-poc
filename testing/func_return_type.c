#include <stdio.h>
sum3(int x, int y, int z)
{
	return x + y + z;
}
int main()
{
	printf("Enter three numbers: ");
	fflush(stdout);
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	int sum_n = sum3(n1, n2, n3);
	printf("The sum is: %d\n", sum_n);
	return 0;
}