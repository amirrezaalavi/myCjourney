#include <stdio.h>

int main(void) {
  printf("%d %x %o %b\n", 16, 16, 16, 16);
  printf("%d %d %d %d\n", 16, 0xF1, 077,
         10001); // compiler does not understand that I'm writting binary number
  printf("%x\n", ~(0x62 & 0173));
  char a = 0x80;
  int b = 0x80;
  long int c = 4096 * 32 * 4096 - 1;
  short int d = 4095;
  printf("%b %b %b %b %b\n", a, a >> 2, a, a << 2, 0x80);
  printf("%b %b %b %b\n", b, b >> 2, b, b << 2);
  printf("%lu %b %b\n", sizeof(d), d, c & d);
  return 0;
}
