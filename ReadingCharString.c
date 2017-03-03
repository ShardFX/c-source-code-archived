/*******************************************************************
Project:

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-12
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function


	char x;
	char y[9];
	char z[12];

	/*
	printf("%s", "Enter a string: ");
	scanf("%c%8s", &x, &y);

	puts("\nThe input was: ");
	printf("The character \"%c\" and the string \"%s\"\n\n", x, y);
	// printf("%c", y[7]);
	*/

	printf("%s", "Enter string: ");
	scanf("%8[aeiou]", z); // no &
	printf("The input was \"%s\"\n", z);

	return 0;

} // end main function
