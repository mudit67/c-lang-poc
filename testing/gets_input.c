#include <stdio.h>
#define MAX 10
int main() {
  char str[MAX];
  while (1) {
    printf("\nEnter values: ");
    fgets(str, MAX, stdin);
    printf("\n\nYou entered:\nstr:%s\n\n", str);
  }
  return 0;
}