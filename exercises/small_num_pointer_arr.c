#include <stdio.h>
#define MAX_LENGTH 7
int main()
{
	int arr[MAX_LENGTH];
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		printf("Enter a Number: ");
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	int *ptr = &arr[0], min = arr[0];
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (*ptr < min)
		{
			min = *ptr;
		}
		ptr++;
	}
	printf("\nThe smallest number among the numbers above is: %d \n", min);
	return 0;
}