
// Exercise 14-2: Write a program to copy a file, expanding all tabs to multiple spaces.


#include <stdio.h>
#include <unistd.h>

/*
#ifdef DEB
const int DEBUG = 1;
#else
const int DEBUG = 0;
#endif
*/
const int SPACEINTAB = 4;
const int BUFF_SIZE = 200;


const int DEBUG = 1;


void convert_t_to_s(int *offset, char *buffer_new);

int main(int argc, char *argv[]){


  printf("Entering function");
    
  FILE * inp_file = fopen(argv[1], "r");
  int read_file_not_done = 1;
  char buffer[BUFF_SIZE], *line, new_buffer[BUFF_SIZE * SPACEINTAB];


  while (read_file_not_done == 1) { // iterate over every line in file

    if (DEBUG == 1) {
        printf("Entering while");
    }
    fgets(line, BUFF_SIZE, inp_file);
    sscanf(line, "%s", buffer); // scan every line for a string

    int j, i;
    
    for (i = 0, j = 0; i < BUFF_SIZE; i++, j++) { // iterate over every character
      
      if (DEBUG == 1) {
          printf("Entering for");
        }
      if (buffer[i] == ' '){ // if the current iteration is on a ' ' character
        convert_t_to_s(&j, new_buffer); // convert to tabs
        j = j + SPACEINTAB - 1; // because other than the current characters, only spaceintab = 1 is added
      }else{
        new_buffer[j] = buffer[i]; // copy the same 
      }
    }   
    printf("%s\n", new_buffer);
  }

  
  fclose(inp_file); 
}




void convert_t_to_s(int *offset, char *buffer_new){
  if (DEBUG == 1) {
    printf("Entering function");
    }
  for (int i = 0; i < SPACEINTAB; i++) {
    buffer_new[*(offset + i)] = ' ';  
  }
}
