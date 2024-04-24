/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[50] = {};

int main(void) {

  for (int i = 0; i < 6; i++) {
    memset(input, 0, 49);
    fgets(input, 49, stdin);
    printf("\n%c\n", input[6]);
    for (int j = 0; j < 10; j++) {
      printf("%c", input[j]);
    }
  }
  return EXIT_SUCCESS;
}
*/
int length(char string[]) {
  int index;
  /* index into the string */
}
/*
 * Loop until we reach the end of string character
 */
for (index = 0; string[index] != '\0'; ++index)
  /* do nothing */
  return (index);
int {
  main() char line[100];
  /* Input line from user */
}
while (1) {
  printf("Enter line:");
  fgets(line, sizeof(line), stdin);
}
printf("Length (including newline) is: %d\n", length(line));
