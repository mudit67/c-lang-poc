#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int main() {
  int sumTotal = 0;
  char line[MAX_LEN]
      // ,
      //  prevLine[MAX_LEN]
      ;
  FILE *ptr = fopen("input-aoc-2023-q1.txt", "r");
  if (ptr == NULL) {
    printf("no such file.");
    return 0;
  }
  int c = 0;
  while (fscanf(ptr, "%s", line) == 1) {
    c++;
    // printf("%s\n", line);
    // fflush(stdout);
    int first, last, i = 0;
    for (i = 0; i < MAX_LEN && line[i] != '\0'; i++) {
      char ch = line[i];
      if (ch >= '0' && ch <= '9') {
        first = ch - '0';
        last = first;
        break;
      }
    }
    for (; i < MAX_LEN && line[i] != '\0'; i++) {
      char ch = line[i];
      if (ch >= '0' && ch <= '9') {
        last = ch - '0';
      }
    }
    printf("Adding %d for %s\n", first * 10 + last, line);
    sumTotal += first * 10 + last;
  }
  printf("\n");
  printf("The number of lines: %d\n", c);
  // while (1) {
  //   fgets(line, MAX_LEN, stdin);
  //   if (!strcmp(line, "\n"))
  //     break;
  //
  // }
  printf("The sum of all calibration values is: %d\n", sumTotal);
  return 0;
}