#include <stdio.h>
#include <string.h>
int main() {
  char str[] = "abcdefgh";
  char *pt = strchr(str, 'a');

  // printf("%c\n", *pt);
  if (pt != NULL)
    printf("Found\n");
  else
    printf("Not found\n");
  return 0;
}