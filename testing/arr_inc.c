#include <stdio.h>
#include <stdlib.h>
#define MAX 12
void increaseArrSize(int *pt, int len) {
  int *oldPt = pt;
  int *newPt = (int *)malloc(len * sizeof(int));
  for (int i = 0; i < len; i++)
    newPt[i] = oldPt[i];
  // free(oldPt);
  pt = newPt;
}
int main() {
  int *pt;
  int len = 1;
  pt = (int *)malloc(len * sizeof(int));
  int i = MAX;
  *pt = 0;
  while (i--) {
    increaseArrSize(pt, len++);
    *(pt + MAX - i) = MAX - i;
  }
  for (int i = 0; i < len; i++) {
    printf("%d\n", *(pt + i));
  }
  return 0;
}