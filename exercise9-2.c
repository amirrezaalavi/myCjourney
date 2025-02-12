#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* a program that calculates resistance of n resistors up to 50 resistors
 * 1/R = 1/R1 + 1/R2 + ...
 * */

char input[50];
double total_resist_inverse;
int resistors[50], resistors_count;

int main(int argc, char *argv[]) {
  printf("How many resistors do you have?: ");
  fgets(input, 50, stdin);
  sscanf(input, "%d", &resistors_count);
  printf("Now  write resistance for every resistor in one seperate line \n");
  for (int i = 0; i < resistors_count; i++) {
    memset(input, 0,
           49); // "input" will not be empty after a fgets, so i free the values
                // so it doesnt change the current input(memory issues)
    printf("%d \bth resistor:", i);
    fgets(input, 10, stdin); // resistors upto 10 digits
    sscanf(input, "%d",
           &resistors[i]); // just in case we need all resistor values
    total_resist_inverse +=
        1.0 / ((float)resistors[i]); // calculate 1/R in realtime
  }
  printf("%lf", (1.0 / total_resist_inverse)); // print the value directly

  return EXIT_SUCCESS;
}
