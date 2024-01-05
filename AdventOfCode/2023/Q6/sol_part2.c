#include <math.h>
#include <signal.h>
#include <stdio.h>
#define NumberOfGames 4
int main() {
  int time = 0, p = 1;
  long dist = 0;
  char line[1000];
  FILE *fp = fopen("/tmp/input.txt", "r");
  fgets(line, 1000, fp);
  // int currentInd = 0;
  for (int i = 0; line[i] != '\0'; i++) {
    if (line[i] >= '0' && line[i] <= '9') {
      for (; line[i] >= '0' && line[i] <= '9'; i++) {
        time = time * 10 + (line[i] - '0');
      }
      // currentInd++;
    }
  }
  fgets(line, 1000, fp);
  // currentInd = 0;
  printf("Dist Line: %s\n", line);
  fflush(stdout);
  for (int i = 0; line[i] != '\0'; i++) {
    if (line[i] >= '0' && line[i] <= '9') {
      for (; line[i] >= '0' && line[i] <= '9'; i++) {
        dist = dist * 10 + (line[i] - '0');
      }
      // currentInd++;
    }
  }
  printf("Time: %d", time);
  // for (int i = 0; i < NumberOfGames; i++) {
  //   printf("\t%d", time[i]);
  //   fflush(stdout);
  // }
  printf("\n");
  printf("Distance: %ld", dist);
  // for (int i = 0; i < NumberOfGames; i++) {
  //   printf("\t%d", dist[i]);
  //   fflush(stdout);
  // }
  printf("\n\n");

  // for (int i = 0; i < NumberOfGames; i++) {
  double y = time;
  double d = dist;
  double x1 = ((y - sqrt(y * y - 4 * d)) / 2);
  double x2 = ((y + sqrt(y * y - 4 * d)) / 2);
  if ((long int)x2 == x2)
    x2--;

  long int diff = (long int)x2 - (long int)x1;
  printf("The number of solution for this pair %lf and %lf is: %ld:: With "
         "roots: %lf %lf\n",
         y, d, diff, x1, x2);
  fflush(stdout);
  // p *= diff;
  // }
  printf("The product is: %ld\n", diff);
  fflush(stdout);
  return 0;
}