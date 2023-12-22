
#include <stdio.h>
#define MAX_LEN 1000
int main() {
  FILE *ptr = fopen("input.txt", "r");
  if (ptr == NULL) {
    printf("no such file.");
    return 0;
  }
  char line[MAX_LEN];
  while (fscanf(ptr, "%s", line) == 1) {
    printf("%s\n", line);
    fflush(stdout);
  }
  return 0;
}