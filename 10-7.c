// Use -D DEBUG flag for gcc to set DEBUG at compile time

#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("DEBUG found\n %d", __linux__);
#ifdef DEBUG
#define TEST(x, y) for (int i = x; i < y; i++)
#endif /* ifndef DEBUG*/
#undef DEBUG
#ifdef DEBUG
  printf("DEBUG found again\n");
#endif /* ifndef DEBUG*/
  TEST(2, 5) { printf("hello"); }
}
