#include <stdio.h>

int main(){
    char line[100]; // full line
    char name[10];
    float age;
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%f %s", &age, name ); // extract a float and a string from the line
    printf("%s : %f\n", name, age);
    return 0;
}
