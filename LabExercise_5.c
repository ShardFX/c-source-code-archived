/****************************************************************
Lab Exercise 5

Write a function that sums all the numbers in the major diagonal
in a matrix of double values using the following header:

    double sumMajorDiagonal(double[][] m)

Write a test program that reads a 4-by-4 matrix and displays
the sum of all its elements on the major diagonal.

Created by: Anwar Haikal Ruslan
Date: Tuesday November 15 2016
****************************************************************/

/* preprocessor directives */
#include <stdio.h>
#define ROW 4
#define COLUMN 4

/* function prototypes */
double sumMajorDiagonal(double[ROW][COLUMN]);

/* functions */
double sumMajorDiagonal(double m[ROW][COLUMN]){

    // variables
    double result = 0;
    register size_t i;
    register size_t j;

    for(i = 0; i < ROW; i++){
        for(j = 0; j < COLUMN; j++){
            if(i == j){ // evaluate diagonal
                result += m[i][j];
            } // end if
        } // end inner for
    } // end outer for

    return result;

} // end function sumMajorDiagonal

/* main function */
int main(void){

    // variables
    double input[ROW][COLUMN] = {{0},{0}};
    register size_t i;
    register size_t j;

    puts("This program calculates the sum of all elements \nin a 4x4 diagonal matrix\n");
    puts("Enter a 4-by-4 matrix row by row: ");

    // reads and stores values into input array
    for(i = 0; i < ROW; i++){
        for(j = 0; j < COLUMN; j++){
            scanf("%lf", &input[i][j]);
        } // end inner for
    } // end outer for

    // display output
    printf("Sum of the elements in the major diagonal is %.1f\n", sumMajorDiagonal(input));

    getchar(); // read char before exiting
    return 0;
} // end function main
