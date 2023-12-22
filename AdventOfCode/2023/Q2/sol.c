#include <stdio.h>
#include <stdlib.h>
int sum = 0;
struct set {
  int red;
  int green;
  int blue;
};
typedef struct set set;
int strcmpWithLen(char *s1, char *s2, int len) {
  for (int i = 0; i < len; i++) {
    int diff = *(s1 + i) - *(s2 + i);
    if (diff != 0)
      return diff;
  }
  return 0;
}
void printfStrLen(char *str, int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%c", *(str + i));
    fflush(stdout);
  }
  printf("\n");
}
set *ballsPerSet(char *setToCheck, int len) {
  printf("Set: ");
  printfStrLen(setToCheck, len);
  set *ret = malloc(sizeof(set));
  ret->blue = 0;
  ret->red = 0;
  ret->green = 0;
  printf("\n");
  for (int i = 0; i < len; i++) {
    if (len - i - 1 >= 5 && strcmpWithLen(setToCheck + i, "green", 5) == 0) {
      int j;
      for (j = i - 2; j >= 0 && setToCheck[j] != ' '; j--)
        ;
      j++;
      for (; *(setToCheck + j) != ' '; j++) {
        ret->green = ret->green * 10 + *(setToCheck + j) - '0';
      }
      // printf("\nFound:%c%c%c\n", *(setToCheck + j), *(setToCheck + j + 1),
      //        *(setToCheck + j + 2));
    }
    if (len - i - 1 >= 4 && strcmpWithLen(setToCheck + i, "blue", 4) == 0) {
      int j;
      for (j = i - 2; j >= 0 && setToCheck[j] != ' '; j--)
        ;
      j++;
      for (; *(setToCheck + j) != ' '; j++) {
        ret->blue = ret->blue * 10 + *(setToCheck + j) - '0';
      }
    }
    if (len - i - 1 >= 3 && strcmpWithLen(setToCheck + i, "red", 3) == 0) {
      int j;
      for (j = i - 2; j >= 0 && setToCheck[j] != ' '; j--)
        ;
      j++;
      for (; *(setToCheck + j) != ' '; j++) {
        ret->red = ret->red * 10 + *(setToCheck + j) - '0';
      }
    }
  }
  return ret;
}
void handleGame(char *gameLine, int len, int game) {
  int start = 0, end = 0;
  for (int i = 0; i <= len; i++) {
    if (gameLine[i] == ';' || gameLine[i] == '\n' || gameLine[i] == '\0' ||
        i == len) {
      end = i - start + 2;
      set *currentSet;
      currentSet = ballsPerSet(gameLine + start, end);
      printf("\nBall for this set: %d %d %d\n", currentSet->red,
             currentSet->green, currentSet->blue);
      if (currentSet->blue > 14 || currentSet->green > 13 ||
          currentSet->red > 12)
        return;
      start += end;
    }
  }
  printf("Adding Game %d !!!\n", game);
  sum += game;
}
int main() {
  // FILE *fp = fopen("/tmp/sample-input.txt", "r");
  FILE *fp = fopen("./Q2-input.txt", "r");
  if (fp == NULL) {
    printf("file not found!\n");
    exit(EXIT_FAILURE);
  }
  char *line = NULL;
  size_t len = 0;
  ssize_t readStream;
  int game = 1;
  while ((readStream = getline(&line, &len, fp)) != -1) {
    printf("Retrieved line of length %zu:\n", readStream);
    // printf("Running for %s", line);
    int i;
    for (i = 0; line[i] != ':'; i++)
      ;
    printf("\nPassing:%s\n", line + i);
    handleGame(line + i, readStream - i - 1, game);
    game++;
  }
  printf("\n\nThe Value of sum is: %d", sum);
  return 0;
}