#include <stdio.h>
#define No_Of_Elements 7
int main()
{
	int num[No_Of_Elements];
	for (int i = 0; i < No_Of_Elements; i++)
	{
		printf("Enter a Number: ");
		fflush(stdout);
		scanf("%d", &num[i]);
	}
	int cPos = 0, cNeg = 0, cOdd = 0, cEven = 0;

	for (int i = 0; i < No_Of_Elements; i++)
	{
		if (num[i] > 0)
			cPos++;
		else if (num[i] < 0)
			cNeg++;

		if (num[i] % 2 == 0)
			cEven++;
		else
			cOdd++;
	}
	printf("\nNumber of Positive numbers: %d \n Number of Negative numbers: %d \n\n Number of Odd numbers: %d \n Number of Even Numbers: %d \n", cPos, cNeg, cOdd, cEven);

	return 0;
}