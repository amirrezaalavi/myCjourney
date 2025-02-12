#include <stdio.h>
// Structs and Advanced data types
//
//
/*
#include <string.h>

struct car_struct { // a compilation of different data types in different
                    // location
  int price;
  char name[32];
} bmw = {12342, "M13"};
union car_union { // only one of the vars can be active at a time
  char name[32];
  int price;
};
int main(void) {
  struct car_struct toyota = {5000, "Corolla"};
  union car_union benz;

  benz.price = 12343;

  printf("%s %d\n", benz.name, benz.price); // accessing the name won't give a
correct result strcpy(benz.name, "E300");

  printf("%s %d\n", benz.name, benz.price); // accessing the price won't give a
correct result

  return 0;
}
*/

/* typedef
struct position {
  int x;
  int y;
  int z;
};

typedef struct position pos;

pos ball = {12, 2, 12};

typedef char string[20];

string str = "Hello My Friend!";
*/

// Enums

/*
enum system_status { POWER_OFF, HALT, ACTIVE }; // enum defination

enum system_status pc1; // create a enum pc1

int main(void) {
  printf("%d", pc1 + 1);
  return 0;
}
*/

// Compact Data
//
//

struct singal {
  int id : 30;
  int active : 1; // only one bit
  int connected : 1;

} connection1 = {332, -1, 0};

int main(void) {
  printf("%d %d %d %lu", connection1.id, connection1.active,
         connection1.connected, sizeof(connection1));
  return 0;
}
