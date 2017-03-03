/**************************************************************************************************
Multidimensional Arrays

type <identifier> [ROW_SIZE][COLUMN_SIZE]
int grades[STUDENTS][MARKS] // Students & marks have to be macros

Created by: Anwar Haikal bin Ruslan
Date: Monday, November 7th 2016
**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 6
#define MARKS 3

/* function prototypes */
void multiArray(void);
void manipulateArray(void);
void additionArray(void);
void test(void);
void multiplyArray(void);
void sumDiagonal(void);

/* functions */
void multiArray(void){

	register size_t row;
	register size_t column;
	int grades[STUDENTS][MARKS] = {{0},{0}};
	int a[2][2] = {{1,2},{3,4}};
	int b[2][4] = {{1,2,3,4},{5,6,7,8}};
	grades[0][0] = 100;
	grades[5][2] = 90;
	
	// printf("%d\n", grades[0][0]);
	
	for(row = 0; row < STUDENTS; row++){
		for(column = 0; column < MARKS; column++){
			printf("%d\t", grades[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
	
	for(row = 0; row < 2; row++){
		for(column = 0; column < 2; column++){
			printf("%d\t", a[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
	
	for(row = 0; row < 2; row++){
		for(column = 0; column < 4; column++){
			printf("%d\t", b[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
} // end function multiArray

void manipulateArray(void){

	register size_t row;
	register size_t column;
	int a[3][2] = {{0},{1,4}}; // first row all zeros
	int grades[3][3] = {{100},{80},{90}}; // if first index initialized, all after become zero
	
	for(row = 0; row < 3; row++){
		for(column = 0; column < 2; column++){
			printf("%d\t", a[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
	
	for(row = 0; row < 3; row++){
		for(column = 0; column < 3; column++){
			printf("%d\t", grades[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
} // end function manipulateArray

void additionArray(void){
	
	int a[2][2] = {{1,2}, {3,4}};
	int b[2][2] = {{5,6}, {7,8}};
	int result[2][2] = {{0},{0}};
	register size_t row;
	register size_t column;
	
	for(row = 0; row < 2; row++){
		for(column = 0; column < 2; column++){
			result[row][column] = a[row][column] + b[row][column];
			printf("%2d\t", result[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
	
	
	
} // end additionArray

void test(void){
	
	register size_t row;
	register size_t column;
	int a[2][2] = {1,2,3,4}; // {{1,2,3,4}} this is error
	
	for(row = 0; row < 2; row++){
		for(column = 0; column < 2; column++){
			printf("%2d\t", a[row][column]);
		} // end for
		puts("");
	} // end for
	puts("");
} // end function test

void multiplyArray(void){

	register size_t row;
	register size_t column;
	register size_t i, j, k;
	int a[2][2] = {{1,2},{3,4}}; // {1,2,3,4};
	int b[2][2] = {2,2,2,2};
	int result[2][2] = {{0},{0}};
	int sum = 0;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			for(k = 0; k < 2; k++){
				sum += a[i][k] * b[k][j];
			} // end for
			result[i][j] = sum;
			sum = 0;
		} // end for
	} // end for
	
	for(row = 0; row < 2; row++){
		for(column = 0; column < 2; column++){
			printf("%2d\t", result[row][column]); // answer should be {{6,6},{14,14}}
		} // end for
		puts("");
	} // end for
	puts("");
} // end function multiplyArray

// do this later
void sumDiagonal(void){
	
}

/* main function */
int main(void){
	
	// ### call functions here ###
	// multiArray();
	// manipulateArray();
	 additionArray();
	// test();
	// multiplyArray();
	// sumDiagonal();
	
	return 0;
} // end function main
