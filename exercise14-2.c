/********************************
 * A program to count lines of a file
 * Usage : ./bin filename1
 *******************************/


#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[]){
    FILE *file_ptr = fopen(argv[1], "r"); // open the filename1
    int character, counter = 0;


    while (1) { // this is wrong, but it works
        character = fgetc(file_ptr); // read char by char
        if(character == EOF){ break;} // get out of while when EOF
        if (character == 10) {
            counter ++;
            // fflush(stdout); // for debug
            sleep(1);

        }
        // printf("%c", character); // for debug
    }
    fclose(file_ptr);
    printf("line count : \n%d\n", counter);

}
