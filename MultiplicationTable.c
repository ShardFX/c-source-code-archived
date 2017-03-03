/*******************************************************************
Project: Multiplication Table

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-26
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define COLMAX 10
#define ROWMAX 12

int main(void){ // start main function


	int row = 1;
	int column;
	int y;

    printf("------------------------------------------------------------");
    printf("\n\tMultiplication Table from 1 - 12");
	printf("\n------------------------------------------------------------");
	printf("\n      ");

	for(int i = 1; i <= COLMAX; i++){
		printf("%4d", i);
	}

	printf("\n------------------------------------------------------------\n");
	do{
		column = 1;
		printf("%4d |", row);
		do{
			y = row * column;
			printf("%4d", y);
			column++;
		}while(column <= COLMAX);
		printf("\n");
		row++;
	}while(row <= ROWMAX);

	printf("------------------------------------------------------------");
	printf("\n");



	int i;
	int j;

	printf("	1   2   3   4   5\n");
	printf("	-----------------\n");
	for(i = 1; i <= 6; i++){
		printf("%4d |", i);
		for(j = 1; j <= 5; j++){
			printf("%4d", i * j);
		}
		printf("\n");
	}
	printf("	------------------\n");



	return 0;

} // end main function
