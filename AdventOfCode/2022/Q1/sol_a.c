#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_MAX 10
int comparator(const void *p, const void *q) {
  int m = *(int *)p;
  int n = *(int *)q;
  return n - m;
}
int strToInt(char str[]) {
  // printf("Converting: %s", str);
  int i = 0, intToReturn = 0;
  while (str[i] != '\n') {
    int digit = str[i++] - 48;
    intToReturn = intToReturn * 10 + digit;
  }
  // printf("Returning: %d\n\n", intToReturn);
  return intToReturn;
}
int *increaseArrSize(int *pt, int len) {
  // int *oldPt = pt;

  int *newPt = (int *)malloc(len * sizeof(int));
  for (int i = 0; i < len; i++)
    newPt[i] = pt[i];
  // free(pt);
  // *pt = newPt;
  // newPt = NULL;

  return newPt;
}
int main() {
  int len_arr = 3;
  int max_index = 0, max_sum = 0;
  int *sum_arr = (int *)malloc(len_arr * sizeof(int));
  sum_arr[0] = 0;
  char line[LINE_MAX], prevLine[LINE_MAX] = "";
  int c = 1;
  // for (c = 1; c <= len_arr; c++) {
  //   while (1) {
  //     fgets(line, LINE_MAX, stdin);
  //     if (!strcmp(line, "\n")) {
  //       if (!strcmp(prevLine, "\n")) {
  //         len_arr = c;
  //         break;
  //       } else {
  //         break;
  //       }
  //     }
  //     int cal = strToInt(line);
  // 		len_arr
  //   }
  // }
  while (1) {
    fgets(line, LINE_MAX, stdin);
    if (!strcmp(line, prevLine) && !strcmp(line, "\n")) {
      break;
    }
    if (!strcmp(line, "\n")) {
      if (sum_arr[c - 1] > max_sum) {
        max_index = c;
        max_sum = sum_arr[c - 1];
      }
      c++;
      if (c > len_arr) {
        sum_arr = increaseArrSize(sum_arr, len_arr + 1);
        len_arr++;
      }
      *(sum_arr + c - 1) = 0;
      strcpy(prevLine, line);
      continue;
    }
    int calories = strToInt(line);
    *(sum_arr + c - 1) = *(sum_arr + c - 1) + calories;
    strcpy(prevLine, line);
  }
  printf("Loop Ended.\nMax Sum: %d. Max Sum Index: %d \n \nLength of array "
         "was: %d",
         max_sum, max_index, len_arr);
  qsort(sum_arr, len_arr, sizeof(int), comparator);

  printf("Top three elves:\n%d\n%d\n%d\n\nSum: %d", sum_arr[0], sum_arr[1],
         sum_arr[2], (sum_arr[0] + sum_arr[1] + sum_arr[2]));
  return 0;
}
