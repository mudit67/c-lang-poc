#include <stdio.h>
int main() {
  int a;
  char b, c;
  while (1) {
		printf("\nEnter values: ");
    scanf("%d%c%c", &a, &b, &c);
    printf("\n\nYou entered:\nint:%d\nchar1:%c\nchar2:%c\n\n", a, b, c);
  }
  return 0;
}