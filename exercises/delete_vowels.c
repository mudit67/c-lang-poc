#include <stdio.h>
#include <string.h>
void shiftCharLeft(char str[], int posToShift);
int main() {
  char sentence[80]
      // = "abcdioafasfuz"
      ;
  printf("Enter a sentence: ");
  fflush(stdout);
  scanf("%[^\n]s", sentence);
  printf("\nInitial String: %s\n", sentence);
  fflush(stdout);
  char vowels[] = "aeiouAEIOU";
  int len = strlen(sentence);
  for (int i = 0; i < len; i++) {
    char *pt = strchr(vowels, sentence[i]);
    if (pt != NULL) {
      shiftCharLeft(sentence, i);
      len--;
      i--;
    }
  }
  printf("Final String: %s\n", sentence);
  return 0;
}

void shiftCharLeft(char str[], int posToShift) {
  int len = strlen(str);
  for (int i = posToShift; i <= len; i++) {
    str[i] = str[i + 1];
  }
}