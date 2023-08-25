#include <stdio.h>
#define MAXLENGTH 7
void insertNumber(int *arr, int len, int posToInsert, int posToTake);
int main()
{
	int arr[MAXLENGTH];
	// = {1, 23, 6, 7, 2, 0, 4};
	for (int i = 0; i < MAXLENGTH; i++)
	{
		printf("Enter a Number: ");
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("\nThe initial array: %d", *arr);
	for (int i = 1; i < MAXLENGTH; i++)
	{
		printf(", %d", arr[i]);
		fflush(stdout);
	}
	printf("\n");
	int min = arr[0];
	for (int i = 1; i < MAXLENGTH; i++)
	{
		if (!(arr[i] < arr[i - 1]))
			continue;
		// {
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
			{
				insertNumber(arr, MAXLENGTH, j, i);
				// int numToInsert = arr[i];
				// for (int k = i; k >= j; k--)
				// arr[k ] = arr[k-1];
				// arr[j] = numToInsert;
			}
		}
		// }
	}
	printf("\nThe final array: %d", *arr);
	for (int i = 1; i < MAXLENGTH; i++)
	{
		printf(", %d", arr[i]);
		fflush(stdout);
	}
	printf("\n");
	return 0;
}

void insertNumber(int arr[], int len, int posToInsert, int posToTake)
{
	int numToInsert = arr[posToTake];
	for (int i = posToTake; i >= posToInsert; i--)
		arr[i] = arr[i - 1];
	arr[posToInsert] = numToInsert;
}