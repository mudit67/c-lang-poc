#include <stdio.h>
#define UPPERCASE(ch) (ch>=65 && ch<=90 ? ch : ch-32 )
int main()
{
	printf("Enter a character: ");
	fflush(stdout);
	char ch;
	scanf("%c", &ch);
	printf("Upper case of %c is: %c\n", ch, UPPERCASE(ch));
	return 0;
}