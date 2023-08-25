#include <stdio.h>
void modify(int[], int, int);
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
	printf("Initial Array: %d", arr[0]);
	for (int i = 1; i < 10; i++)
	{
		printf(", %d", arr[i]);
		fflush(stdout);
	}
	printf("\n");
	modify(arr, 10, 5);

	printf("Final Array: %d", arr[0]);
	for (int i = 1; i < 10; i++)
	{
		printf(", %d", arr[i]);
		fflush(stdout);
	}
	printf("\n");
	return 0;
}
void modify(int arr[], int len, int toMultiply)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] *= 5;
	}
}