#include <stdio.h>
int main() {
  long int a[] = {1, 3, 21345, 234};
  long int *pt = a;
  for (int i = 0; i <= 3; i++) {
    printf("%ld\n", *pt++);
  }
  return 0;
}