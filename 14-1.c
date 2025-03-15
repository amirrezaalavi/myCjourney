#include <stdio.h>

char const *filename = "input.txt";

int main(void) {
  FILE *inp_file;
  inp_file = fopen(filename, "r+");
  if (inp_file == NULL) {
    // fclose(inp_file);
    inp_file = fopen(filename, "w+");
    fputs("This file is created", inp_file);
  }
  char *content;
  fgets(content, 15, inp_file);
  fclose(inp_file);
  printf("%s\n", content);
}
