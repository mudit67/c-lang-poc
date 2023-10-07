#include <stdio.h>
int main() {
  char isbn[10];
  printf("Enter a ten digit ISBN number: ");
  fflush(stdout);
  scanf("%s", isbn);
  int isbn_num;
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    if (isbn[i] != 'X' || isbn[i] != 'x')
      isbn_num = (int)isbn[i] - (int)'0';
    else
      isbn_num = 10;
    printf("%d: %d\n", (i + 1), isbn_num);
    sum += isbn_num * (i + 1);
  }
  printf("Sum: %d\n", sum);
  if (sum % 11 == 0)
    printf("Valid ISBN Number\n");
  else
    printf("Invalid ISBN Number\n");
  return 0;
}