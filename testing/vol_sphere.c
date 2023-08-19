#include <stdio.h>
int main()
{
	printf("Enter radius: ");
	fflush(stdout);
	int r;
	scanf("%d", &r);
	float a = 4 * 3.1415 * r * r * r / 3;
	printf("The volume of sphere is : %f", a);
	return 0;
}