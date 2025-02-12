#include <stdio.h>

int main(void) {
  short int a = 1;
  long int b = 1000000000;
  printf("%hb\n", a);
  for (long int i = 1; i > 0; i <<= 2) {
    printf("%lb\n", i);
    b = i;
  }
  b = 1000000001;
  short int c = b % a;
  // printf("%b\n%lb", c, b);
  printf("%d\n", 12 % 5);
  return 0;
}
