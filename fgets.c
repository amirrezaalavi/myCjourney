/* demostration of fgets and string.h functions usage*/

// INCLUDES
#include <stdio.h>
#include <string.h>

// VARS
char input_string[20];
char input_string2[20];
char full_name[40]; // compilation of input_string at beginning and
                    // input_string2 at end
// MAIN
/* getting input and printing it */
int main(int argc, char *argv[]) {
  printf("Enter name:\n");
  fgets(input_string, sizeof(input_string), stdin);
  input_string[strlen(input_string) - 1] = '\0'; // remove \n from input_string
  printf("Enter lastname:\n");
  fgets(input_string2, sizeof(input_string2), stdin);
  input_string2[strlen(input_string2) - 1] =
      '\0'; // remove \n from input_string2
  strcpy(full_name, input_string);
  strcat(full_name, input_string2);
  printf("%s is your name \n", full_name);
  return 0;
}
