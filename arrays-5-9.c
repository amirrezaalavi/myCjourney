


#include <stdio.h>
int int_array[] = {1,4,5,3,3};
int multidimint [4][2][4];
char name1[] = {'a', 'm', 'i', 'r', '\0'}; // %c or %s
char name2[] = "amir"; // also 5 chars
long int lint = 0xFF42354353242543; // base 16, 8 bits on mem,  %ld
unsigned long int ulint; // %lu
int iint = 0324543533; // base 8, 4 bits on mem,  %d
unsigned int uiint; // %ud
short int sint = 32422; // 2 %hd
unsigned short int usint; // %hu

float ffloat; // %f
double lfloat; // %lf
//long float llfloat; // %Lf , only some compilers

const int LIMIT = 6; // constant in the whole program
float flist[LIMIT];


int main(){
    printf("%lu %lu %lu", sizeof(lint), sizeof(sint), sizeof(iint));
}


