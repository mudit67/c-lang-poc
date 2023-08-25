#include <stdio.h>
#define MAXLENGTH 10
int main()
{
	char chArr[MAXLENGTH] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char *rPtr = &chArr[MAXLENGTH - 1], *lPtr = &chArr[0];
	char choice = 'a';
	while (choice != '0')
	{
		int len_arr = (rPtr - lPtr);
		printf("\n\n1 for Retrieve Left. \n2 for Retrieve Right. \n3 for Insert Left. \n4 for Insert Right \nEnter your Choice: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%c", &choice);
		switch (choice)
		{
		case '1':
		{
			if (len_arr == 0)
			{
				printf("The dequeue is empty.\n");
				break;
			}
			printf("The Left Most character is: %c\n", *lPtr);
			for (int i = 0; i < len_arr - 2; i++)
			{
				*(lPtr + i) = *(lPtr + i + 1);
			}
			rPtr--;
			break;
		}
		case '2':
		{
			if (len_arr == 0)
			{
				printf("The dequeue is empty.\n");
				break;
			}
			printf("The Right Most character is: %c\n", *rPtr);
			// *rPtr ='';
			rPtr--;
			break;
		}
		case '3':
		{
			if (len_arr == MAXLENGTH)
			{
				printf("The dequeue is full.\n");
				break;
			}
			char ch;
			printf("Enter a Character: ");
			fflush(stdout);
			scanf("%c", &ch);
			for (int i = 0; i < len_arr - 2; i++)
			{
				*(lPtr + i + 1) = *(lPtr + i);
			}
			*lPtr = ch;
			rPtr++;
		}
		case '4':
		{
			if (len_arr == MAXLENGTH)
			{
				printf("The dequeue is full.\n");
				break;
			}
			char ch;
			printf("Enter a Character: ");
			fflush(stdout);
			scanf("%c", &ch);
			rPtr++;
			*rPtr = ch;
		}
		case '0':
		{
			printf("Exiting.....\n");
			break;
		}
		default:
		{
			printf("Invalid Choice. You entered: %c\n", choice);
		}
		}
	}
	printf("Final array: %c", *lPtr++);
	fflush(stdout);
	for (; lPtr <= rPtr; lPtr++)
	{
		printf(", %c", *lPtr);
		fflush(stdout);
	}
	return 0;
}