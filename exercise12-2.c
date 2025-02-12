// Write a struct to store time, then a function to find difference
//
//

#include <stdio.h>
#include <stdlib.h>
struct clock {
  short int hour;
  short int minute;
};

typedef struct clock time;

time difference(time time1, time time2) {
  time diff;
  diff.hour = time2.hour - time1.hour;
  diff.minute = time2.minute - time1.minute;
  return diff;
}

int main(void) {
  time time1 = {12, 34}, time2 = {24, 60};
  time diff = difference(time1, time2);
  printf("%d %d\n", diff.hour, diff.minute);
  return EXIT_SUCCESS;
}
