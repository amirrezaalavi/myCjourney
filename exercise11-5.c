#include <stdio.h>

int main(void) {
  long int long_int = 0xAF2FFAFF, test = 0;
  short int shorts[4] = {1, 1, 1, 1};
  printf("%lb\n", long_int);

  for (int i = 0; i < 4; i++) {
    shorts[i] = long_int;
    long_int = long_int >> 4;
    printf("%b %lb\n", shorts[i], long_int);
  }

  return 0;
}
