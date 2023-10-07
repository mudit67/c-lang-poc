#include <stdio.h>
int main()
{
	static char str[50];
	printf("Enter somthing:-\n");
	scanf("%[^\n\n]s", &str);
	printf("You entered:-\n");
	for (int i = 0; i < 50; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}