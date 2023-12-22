#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int numFromWord(char *in, int index) {
  char word[MAX_LEN];
  strcpy(word, in);
  word[index] = '\0';
  if (!strcmp(word, "one"))
    return 1;
  else if (!strcmp(word, "two"))
    return 2;
  else if (!strcmp(word, "three"))
    return 3;
  else if (!strcmp(word, "four"))
    return 4;
  else if (!strcmp(word, "five"))
    return 5;
  else if (!strcmp(word, "six"))
    return 6;
  else if (!strcmp(word, "seven"))
    return 7;
  else if (!strcmp(word, "eight"))
    return 8;
  else if (!strcmp(word, "nine"))
    return 9;
  else
    return 0;
}
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

    int first, last, i = 0, n = 0;
    char c = line[i];
    while (c != '\0') {
      n++;
      c = line[++i];
    }
    i = 0;
    for (i = 0; i < MAX_LEN && line[i] != '\0'; i++) {
      char ch = line[i];
      if (ch >= '0' && ch <= '9') {
        first = ch - '0';
        last = first;
        break;
      }
      if (n - i >= 3) {
        int num = numFromWord(line + i, 3);
        if (num) {
          first = num, last = num;
          break;
        }
      }
      if (n - i >= 4) {
        int num = numFromWord(line + i, 4);
        if (num) {
          first = num, last = num;
          break;
        }
      }
      if (n - i >= 5) {
        int num = numFromWord(line + i, 5);
        if (num) {
          first = num, last = num;
          break;
        }
      }
    }
    for (; i < MAX_LEN && line[i] != '\0'; i++) {
      char ch = line[i];
      if (ch >= '0' && ch <= '9') {
        last = ch - '0';
      }

      if (n - i >= 3) {

        int num = numFromWord(line + i, 3);
        if (num) {
          last = num;
        }
      }
      if (n - i >= 4) {
        int num = numFromWord(line + i, 4);
        if (num) {
          last = num;
        }
      }
      if (n - i >= 5) {
        int num = numFromWord(line + i, 5);
        if (num) {
          last = num;
        }
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