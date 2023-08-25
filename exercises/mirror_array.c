#include <stdio.h>
int main()
{
	printf("Enter the length of the array: ");
	fflush(stdout);
	int length;
	scanf("%d", &length);
	printf("\n");
	int arr[length];
	for (int i = 0; i < length; i++)
	{
		printf("Enter a Number: ");
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	int half_len = length / 2;
	for (int i = 0; i <= half_len; i++)
	{
		if (arr[i] != arr[length - 1 - i])
		{
			printf("\nNot a mirror array.\n");
			return 0;
		}
	}
	printf("\nThis array is a mirror array.\n");
	return 0;
}