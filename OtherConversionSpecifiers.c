/*******************************************************************
Project: Other Conversion Specifiers

p - pointer value in an implementation defined manner
% - display the percent character

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	int *ptr; // define pointer to int
	int x = 12345; // initialize int x

	ptr = &x; // assign address of x to ptr
	printf("The value of ptr is %p\n", ptr);
    printf("The address of x is %p\n\n", &x);

    puts("Printing a %% in a format control string");

	return 0;

} // end main function
