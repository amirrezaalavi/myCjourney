#include <stdio.h>
#include <string.h>


int main(){
    char a[13], b[40];
    fgets(a ,sizeof(a) , stdin); // read sizeof(a) characters into a from stdin
    // strcpy(b, a); copy a into b
    fgets(b,sizeof(b) , stdin);
    //b[1] = '\0'; // to fix \n from input
    strcat(b, a); // add a to b
    int cmp = strcmp(a, b); // compare a and b
    printf("%s %s", b, a);

}
