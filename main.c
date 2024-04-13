#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char input[50];
int point1[2], point2[2];
int calculated;
float final;

int main() {
  printf("enter point1 x, y then point2 x,y : ");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d %d %d %d", &point1[0], &point1[1], &point2[0], &point2[1]);
  calculated = abs(point2[1] - point1[1]) + abs(point2[0] - point1[0]);
  final = sqrt((double)calculated);

  printf("\n heres the number: %f", final);
  return 0;
}
