#include <stdio.h>
int main() {
  int a[] = {
      1, 2, 3, 5, 6, 78,
  };
  printf("%lu\n", sizeof(a) / sizeof(int));
  return 0;
}