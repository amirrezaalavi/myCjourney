// using fwrite and fread
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
// #include <stdlib.h>
// #include <string.h>
//
//



struct {
    int x1;
    int x2;
} position = {12, 32};
int main(){
    FILE * inp_file;
    // /* read
    inp_file = fopen("data.bin", "wb");
    // char str[100];
    fwrite(&position, sizeof(position), 1, inp_file);

    fclose(inp_file);


    inp_file = fopen("data.bin", "rd");
    int read;
    char saved_data[100];
    // read = fread(saved_data, 1, sizeof(saved_data), inp_file);
    read = fread(&position, 1, sizeof(saved_data), inp_file);
    // sscanf(str, "%d", &x1);
    printf("%d %d\n %d\n", position.x1, position.x2, read);
    //printf("%s \n%d\n", saved_data, read);  // won't show any number

    fclose(inp_file);
    //inp_file = fopen("data.bin", "w");

}
