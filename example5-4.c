#include <stdio.h>
#include <string.h>

/* Converting Km to Miles */
const float RATIO = 0.6213712; // Miles = ration * km

char input_text[50];
float input_float;
double final_result;

double i = 10.0;
int main(int argc, char *argv[]) {
  fgets(input_text, sizeof(input_text), stdin);
  sscanf(input_text, "%f", &input_float);
  final_result = input_float * RATIO;
  printf("\n to Miles: %lf ", final_result);
  return 0;
}
