#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int main(void) {
  FILE *file;
  char *file_str;
  file = fopen("input.txt", "w");
  char *output;
  sprintf(output, "%d + %d = %ld\n", 12, 13, (long)25);
  fprintf(stdout, "%s", output);
  if (output != NULL) {

    fprintf(file, output);
  }
  fscanf(file,file_str);
  printf("%s", file_str);
  return 0;
}
