#include <stdio.h>
#include <unistd.h>


const int BUFFER_SIZE = 200;


int main(int argc, char *argv[]){
  FILE *file;
  file = fopen("data.bin", "r");
  char *line1, line2[BUFFER_SIZE];
  for (int i = 0 ; i < 4; i++) {


  fgets(line2, BUFFER_SIZE, file);
  printf("%s\n", line2);
  }
  fclose(file);

}
