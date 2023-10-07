// Dummmy credit card number: 4567123456789129

#include <stdio.h>
int main() {
  char card_number[16];
  printf("Enter a credit card number: ");
  fflush(stdout);
  scanf("%s", card_number);
  int sum_odd = 0, temp_num, sum_even = 0, i;
  for (i = 0; i <= 14; i += 2) {
    temp_num = ((card_number[i] - 48) * 2);
    sum_odd += temp_num > 9 ? temp_num - 9 : temp_num;
  }
  for (i = 1; i <= 15; i += 2) {
    sum_even += (card_number[i] - 48);
  }
  if ((sum_even + sum_odd) % 10 == 0) {
    printf("Valid Card number.\n");
  } else {
    printf("Not a valid number.\n");
  }
  return 0;
}