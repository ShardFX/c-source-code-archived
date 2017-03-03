/******************************************************************************
Array name is same as the address of array first element
Created by: Anwar Haikal Ruslan
Date: Wed, Oct 26 2016
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char array[5];
	
	printf("	array = %p\n	&array[0] = %p\n	&array = %p\n\n", array, &array[0], &array); // %d hex to int, %o hex to octal
	
	for(register size_t i = 0; i < 5; i++){
		printf("\taddress of array[%lu] = %p\n", i, &array[i]);
	}
	
	getchar();
	return 0;
} // end main
