#include <stdio.h>
#include <string.h>
int main() {
  char str[51] = "";
  long int a[] = {1, 0, 1234567};
  int len = strlen(str);
  // sscanf(a,"%d", &a, a);
  sprintf(str, "%ld", a[0]);
  len = strlen(str);
  sprintf(str + len, "%017ld", a[1]);
  len = strlen(str);
  sprintf(str + len, "%017ld", a[2]);

  printf("Str: %s\n", str);
  return 0;
}