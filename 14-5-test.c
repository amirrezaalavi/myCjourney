#include <stdio.h>
#include <unistd.h>





int main(int argc, char *argv[]){
  FILE *inp_file;
  char iterator_char;
  do {
    inp_file = fopen(argv[1], "r");
    iterator_char = fgetc(inp_file);
    sleep(1);
    fflush(stdout);
    printf("%c", iterator_char);
    fclose(inp_file);
  }while (iterator_char != EOF);
}
