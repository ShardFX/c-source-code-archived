/*******************************************************************
Project: String conversion specifiers

c - char
s - string

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	char character = 'A'; // initialize char
	char string[] = "This is a string"; // initialize char array
	const char *stringPtr = "This is also a string"; // char pointer

	printf("%c\n", character);
	printf("%s\n", "This is a string");
	printf("%s\n", string);
	printf("%s\n", stringPtr);

	return 0;

} // end main function
