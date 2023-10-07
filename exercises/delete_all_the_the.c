#include <stdio.h>
#include <string.h>
void delete_the_(char str[], int posToShift);
int main() {
  printf("Enter a sentence: ");
  fflush(stdout);
  char sentence[80];
  scanf("%[^\n]s", sentence);
	
  char the[] = "the";
  while (1) {
    char *pt = strstr(sentence, the);
    if (pt != NULL) {
      int pos = pt - sentence;
      delete_the_(sentence, pos);
    } else
      break;
  }
  printf("\nFinal Sentence: %s\n", sentence);

  return 0;
}
void delete_the_(char str[], int posToShift) {
  int len = strlen(str) - 3;
  for (int i = posToShift; i <= len; i++) {
    str[i] = str[i + 3];
  }
}