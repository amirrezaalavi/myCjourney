// buffered and unbuffered I/O

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
// #include <stdlib.h>
// #include <string.h>

int main(void) {
    /* buffered
    printf("Hello");
    sleep(3);
    printf("stranger");
    return 0;
    */
    /* buffered with flush
    printf("Hello");
    fflush(stdout);
    sleep(3);
    printf("stranger");
    return 0;
    */

    // open for unbuffered I/O
    //
    int file_descriptor;
    file_descriptor = open("data.bin", O_RDWR);
}
