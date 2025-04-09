#include <stdio.h>
#include <stdlib.h>

// a program that inputs a string, then changes every '-' with '_'

int main(int argc, char *argv[]) {
  char input[50] = {},
       fixed_copy[50] =
           {}; // fixed_copy is unnecessary, but i do it any ways :)))
  printf("Input: ");
  fgets(input, 49, stdin);
  for (int i = 0; i < 49; i++) {
    if (input[i] == '-') {
      fixed_copy[i] = '_';
    } else {
      fixed_copy[i] = input[i];
    }
    printf("%c", fixed_copy[i]);
  }

  return EXIT_SUCCESS;
}
