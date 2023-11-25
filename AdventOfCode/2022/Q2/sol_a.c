#include <stdio.h>
#include <string.h>
#define LINE_MAX 5
int movePoints(char ch) { return ch - 87; }
int winPoints(char oMove, char mMove) {
  int points = 0;
  if (mMove - 87 == oMove - 64) {
    points = 3;
  } else if (oMove == 'A' && mMove == 'Y' || oMove == 'B' && mMove == 'Z' ||
             oMove == 'C' && mMove == 'X') {
    points = 6;
  }
  return points;
}
int main() {
  int sum = 0, c = 0;
  char line[LINE_MAX]
      // ,
      //  prevLine[LINE_MAX]
      ;
  while (++c) {
    fgets(line, LINE_MAX, stdin);
    if (!strcmp(line, "\n")) {
      break;
    }
    char oMove = line[0], mMove = line[2];
    sum += movePoints(mMove) + winPoints(oMove, mMove);
    // printf("\nThe points: %d %d %d %d\n", movePoints(mMove),
    //  winPoints(oMove, mMove), c, sum);
    // fflush(stdout);
  }
  printf("\nThe sum of points: %d\n", sum);
  return 0;
}