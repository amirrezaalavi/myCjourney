#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

// Write a Program that counts the line of a file
// Example usage :
// $ ./program filename

int main(int argc, char* argv[]){
  FILE * inp_file = fopen(argv[1], "r");
  char reading[11];
  int lines = 0;
  while(fgets(reading, 10, inp_file) != NULL){
    lines += 1;
  }
  printf("Number of lines: %d\n", lines);
}






  

