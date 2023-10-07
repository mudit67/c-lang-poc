#include <stdio.h>
int main() {
  char str1[10], str2[10], str3[10], str4[10];
	printf("Enter a 4 word string: ");
	fflush(stdout);
  scanf("%s%s%s%s", str1, str2, str3, str4);
  printf("\nStrings:-\nstr1:%s\nstr2:%s\nstr3:%s\nstr4:%s\n", str1, str2, str3,
         str4);
  return 0;
}