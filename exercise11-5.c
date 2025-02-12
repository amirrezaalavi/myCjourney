/* Writing a program which takes a long int (32 bits) and divides them to 4 *
 * short ints(4 bits)*/

#include <stdio.h>

int main(void) {
  short int short_list[4] = {0};
  long int long_num = 0xFF1F2; // random number
  for (int count = 0; count < 32 && long_num > 0; count++) {

    // printf("debug : count/4 :%d long_num: %ld short_list : %hd\n", count / 8,
    //       long_num, short_list[count / 8]);
    if (long_num % 2 == 1) { // in case the bit is one, e.g. 100101 % 10 = 1
      short_list[count / 8] +=
          1 << count % 8; // add the 1 * 2^count, but we want to put 8 bit in
                          // each short int , so count%8
    }
    long_num = long_num >> 1; // check for the next bit
    // printf("%hb, %lb\n", short_list[count / 8], long_num);
  }
  printf("%hd %hd %hd %hd", short_list[0], short_list[1], short_list[2],
         short_list[3]);
}
