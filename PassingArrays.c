/******************************************************************************

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 // macro

/* function prototypes */
void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void){
	int a[SIZE] = {0,1,2,3,4};
	size_t i;
	
	puts("Effects of passing entire array by reference: \n\nThe values of the original array are: ");
	
	for(i = 0; i < SIZE; ++i){
		printf("%3d\n", a[i]);
	}
	puts("");
	
	modifyArray(a, SIZE);
	puts("The values of the modified array are: ");
	for(i = 0; i < SIZE; ++i){
		printf("%3d", a[i]);
	}
	
	printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);
	
	modifyElement(a[3]); // pass array element a[3] by value
	printf("The value of a[3] is %d\n", a[3]);
	
	getchar();
	return EXIT_SUCCESS;
} // end function main

void modifyArray(int b[], size_t size){
	size_t j;
	for(j = 0; j < SIZE; ++j){
		b[j] *= 2;
	}
} // end function modifyArray

void modifyElement(int e){
	printf("Value of modifyElement is %d\n", e *= 2);
} // end function modifyElement

