#include <stdio.h>
#include <string.h>

/* this programs tries to calculate number using single line inputs*/

char input_line[53];
char operator;
int terminate = 0;
int current_number, calculated_number;

int main(int argc, char *argv[]) {
  printf("Enter the first number for operator: ");
  fgets(input_line, 52, stdin);
  sscanf(input_line, "%d", &current_number);
  calculated_number = current_number;
  while (terminate == 0) {
    printf("\nEnter operator then the number, like \"+ 12\", write \"q\"\n");
    fgets(input_line, 52, stdin);
    sscanf(input_line, "%c %d", &operator, & current_number);
    switch (operator) {
    case '=':
      printf("\nYour final number is : %d\n", calculated_number);
      break;
    case '+':
      printf("%d + %d\n", calculated_number, current_number);
      calculated_number += current_number;
      break;

    case '-':
      printf("%d - %d\n", calculated_number, current_number);
      calculated_number -= current_number;
      break;

    case '/':
      printf("%d / %d\n", calculated_number, current_number);
      if (current_number == 0) {
        printf("printing by zero is not possible in this program");
        break;
      }
      calculated_number /= current_number;
      break;

    case 'q':
      terminate = 1;
      break;

    default:
      printf("\nwrong input\n");
      break;
    }
  }
  return 0;
}
