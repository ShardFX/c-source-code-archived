/*******************************************************************
Project: Floating-point specifiers

Floating-point specifiers
e/E - exponential notation
f/F - fixed-point notation (Not supported in Visual C++)
g/G - floating

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	printf("%e\n", 1234567.89);
	printf("%e\n", +1234567.89); // plus does not print
	printf("%e\n", -1234567.89); // minus prints
	printf("%E\n", 1234567.89);
	printf("%f\n", 1234567.89);
	printf("%g\n", 1234567.89);
	printf("%G\n", 1234567.89);

	return 0;

} // end main function
