#include <stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
  int m = *(int *)p;
  int n = *(int *)q;
  return m - n;
}
void printArr(int arr[], int len) {
  for (int i = 0; i < len; i++)
    printf("%d, ", *(arr + i));
}
int main() {
  int arr[] = {1, 6, 5, 2, 3, 9, 4, 7, 8, -1, -45, 0, 0, 0, 123, 14, 3, 5};
  int size = sizeof(arr) / sizeof(int);
  printf("Intial array: ");
  printArr(arr, size);
  printf("\n");
  qsort(arr, size, sizeof(int), comparator);
  printf("Final Array: ");
  printArr(arr, size);
  return 0;
}