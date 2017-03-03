/******************************************************************************
Static Arrays

Created by: Anwar Haikal Ruslan
Date: Wed, Oct 06 2016
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* function prototype */
void staticArrayInit(void);
void automaticArrayInit(void);

/* functions */
int main(void){

	puts("First call to each function: ");
	staticArrayInit();
	automaticArrayInit();
	
	puts("\n\n\nSecond call to each function: ");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	
	getchar();
	return EXIT_SUCCESS; // needs stdlib.h
	
} // end main

void staticArrayInit(void){
	static int array1[3]; // auto initialize 0 because it's static'
	register size_t i;
	
	puts("\nValues on entering staticArrayInit: ");
	
	// output contents of array1
	for(i = 0; i <= 2; ++i){
		printf("array1[%lu] = %-4d", i, array1[i]);
	} // end for
	
	puts("\n\nValues on exiting staticArrayInit: ");
	
	// modify and output contents of array1
	for(i = 0; i <= 2; ++i){
		printf("array1[%lu] = %-4d", i, array1[i] += 5);
	} // end for
} // end function staticArrayInit

void automaticArrayInit(void){
	int array2[3] = {1, 2, 3};
	register size_t i;
	
	puts("\n\nValues on entering automaticArrayInit: ");
	
	// output contents of array2
	for(i = 0; i <= 2; ++i){
		printf("array2[%lu] = %-4d", i, array2[i]);
	} // end for
	
	puts("\n\nValues on exiting automaticArrayInit: ");
	
	// modify and output contents of array2
	for(i = 0; i <= 2; ++i){
		printf("array2[%lu] = %-4d", i, array2[i] += 5);
	} // end for
} // end function automaticArrayInit
