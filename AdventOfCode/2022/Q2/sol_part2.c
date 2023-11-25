#include <stdio.h>
#include <string.h>
#define LINE_MAX 5
int winPoints(char ch) { return (ch - 88) * 3; }
int movePoints(char oMove, char gameResult) {
  int points = 0;
  if (gameResult == 'Y') {
    points = oMove - 64;
  } else if (gameResult == 'Z') {
    if (oMove == 'A')
      points = 2;
    else if (oMove == 'B')
      points = 3;
    else
      points = 1;
  } else {
    if (oMove == 'A')
      points = 3;
    else if (oMove == 'B')
      points = 1;
    else
      points = 2;
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
    char oMove = line[0], gameResult = line[2];
    sum += movePoints(oMove, gameResult) + winPoints(gameResult);
    // printf("\nThe points: %d %d %d %d\n", movePoints(oMove, gameResult),
    //        winPoints(gameResult), c, sum);
  }
  printf("\nThe sum of points: %d\n", sum);
  return 0;
}