#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef __linux__
#define __msdos__
#endif /* linux or windows? */

#ifndef O_BINARY
#define O_BINARY 0
#endif

const int BUFFER_SIZE = 32 * 1;
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

int main(int argc, char *argv[]) {
  char buffer[BUFFER_SIZE];
  buffer[BUFFER_SIZE - 1] = '\0';
  int inp_desc, out_desc; // input/output file descriptor
  int read_size = 1;      // number of bytes on last read

  
  // Opening Files
  if (argc != 3) {
    fprintf(stderr, "Error, wrong number of parameters\n");
    fprintf(stdout, "Usage is: ./copy <src> <dest>");
    exit(8);
  }
  inp_desc = open(argv[1], O_RDONLY | O_BINARY, mode);
  if (inp_desc < 0) {
    fprintf(stderr, "Problem with input file");
    exit(8);
  }
  out_desc = open(argv[2], O_WRONLY | O_BINARY | O_CREAT | O_TRUNC, mode);
  if (out_desc < 0) {
    fprintf(stderr, "Problem with output file");
    exit(8); //
  }

  while (read_size > 0) {
    read_size = read(inp_desc, buffer, (unsigned int)BUFFER_SIZE);
    if (read_size < 0) {
      fprintf(stderr, "Error with reading");
      exit(8);
    }
    write(out_desc, buffer, (unsigned int)BUFFER_SIZE);
  }
  close(out_desc);
  close(inp_desc);
}
