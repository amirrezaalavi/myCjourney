#include <stdio.h>
#include <string.h>
/* Program that gets m, n and prints a four blocks of m*n */



int main(){
    // Vars
    const int X = 24, Y = 20; // maximum size of the shape
    char line[30];
    int m , n; // size of rectangle
    int num_vert, num_horz; // number of squares, horizontally and vertically


    //Start

    printf("Input m and n:");
    fgets(line, 30, stdin);
    sscanf(line, "%d %d", &m, &n);
    num_vert = X / m;
    num_horz = Y / n;

    // initialize horizontal and vertical lines
    char shape_vert[40], shape_horz[40]; // the shape to draw in each line

    for(int i = 0; i < (m - 1); i ++){ //draw the vertical lines
        strcat(shape_vert, "-");
    } strcat(shape_vert, "+");

    strcat(shape_horz, "|");
    for (int j = 0; j < (X); j++) {
        strcat(shape_horz, " ");
    }strcat(shape_horz, "|");




    for (int loop = 0; loop <= num_horz; loop++){ // loop to draw every rectangle
        // draw starting coloumn
        printf("\n+");

        for(int i = 0; i < num_vert; i++)
            printf("%s", shape_vert);

        if (loop < num_horz) {

            for(int j = 0; j < (num_horz - 2); j++)
                printf("\n%s", shape_horz);
        }


    }



}
