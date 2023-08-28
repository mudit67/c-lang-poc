// Code to shift a 2-dimensional array leftwards by 2 positions.
void shift_right(int *, int);
#include <stdio.h>
int main()
{
	int arr_[][5] = {
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15},
			{16, 17, 18, 19, 20},
			{21, 22, 23, 24, 25}};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d, ", arr_[i][j]);
		}
		printf("\n");
	}
	shift_right(&arr_[0][0], 5);
	printf("\n\n\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d, ", arr_[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//  Function to shift elements(single dimensional arrays) of a 2-dimensional
//  array leftwards by 2 positions.
void shift_right(int *arr, int size)
{
	int arr_copy[10];
	for (int i = 0; i < 10; i++)
	{
		arr_copy[i] = *(arr + i);
	}

	for (int i = 0; i < (size * 5) - (2 * 5); i++)
	{
		*(arr + i) = *(arr + i + 10);
	}
	for (int i = 0, j = (size * 5) - 10; i < 10, j < (size * 5); i++, j++)
	{
		*(arr + j) = *(arr_copy + i);
	}
}