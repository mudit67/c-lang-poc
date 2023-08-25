#include <stdio.h>
int main()
{
	int a[] = {1, 2, 3, 5};
	int b[] = {1, 2, 3};
	a = b;
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len; i++)
		printf("%d\n", a[i]);
	return 0;
}