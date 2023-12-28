#include <math.h>
#include <signal.h>
#include <stdio.h>
#define NumberOfGames 4
int main() {
  int time[NumberOfGames] = {0}, dist[NumberOfGames] = {0}, p = 1;
  char line[1000];
  FILE *fp = fopen("./input.txt", "r");
  fgets(line, 1000, fp);
  int currentInd = 0;
  for (int i = 0; line[i] != '\0'; i++) {
    if (line[i] >= '0' && line[i] <= '9') {
      for (; line[i] >= '0' && line[i] <= '9'; i++) {
        time[currentInd] = time[currentInd] * 10 + (line[i] - '0');
      }
      currentInd++;
    }
  }
  fgets(line, 1000, fp);
  currentInd = 0;
  for (int i = 0; line[i] != '\0'; i++) {
    if (line[i] >= '0' && line[i] <= '9') {
      for (; line[i] >= '0' && line[i] <= '9'; i++) {
        dist[currentInd] = dist[currentInd] * 10 + (line[i] - '0');
      }
      currentInd++;
    }
  }
  printf("Time Array:");
  for (int i = 0; i < NumberOfGames; i++) {
    printf("\t%d", time[i]);
    fflush(stdout);
  }
  printf("\n");
  printf("Distance Array:");
  for (int i = 0; i < NumberOfGames; i++) {
    printf("\t%d", dist[i]);
    fflush(stdout);
  }
  printf("\n\n");

  for (int i = 0; i < NumberOfGames; i++) {
    float y = time[i];
    float d = dist[i];
    float x1 = ((y - sqrt(y * y - 4 * d)) / 2);
    float x2 = ((y + sqrt(y * y - 4 * d)) / 2);
    if ((int)x2 == x2)
      x2--;

    int diff = (int)x2 - (int)x1;
    printf("The number of solution for this pair %f and %f is: %d:: With "
           "roots: %f %f\n",
           y, d, diff, x1, x2);
    fflush(stdout);
    p *= diff;
  }
  printf("The product is: %d\n", p);
  fflush(stdout);
  return 0;
}