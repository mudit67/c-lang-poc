#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	while (1)
	{
		if (ch == '0')
			break;
		printf("\nYou Entered: %c", ch);
		printf("\nEnter a character: ");
		fflush(stdin);
		scanf("%c", &ch);
		fflush(stdin);
	}
	return 0;
}