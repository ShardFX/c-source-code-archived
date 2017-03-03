/*******************************************************************
Project: Printing integers, floating-point numbers and string with precisions

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	int i = 873; // initialize int i
	double f = 123.94536; // initialize double f
	char s[] = "Happy Birthday"; // initialize char array s

	puts("Using precision for integers");
	printf("\t%.4d\n\t%.9d\n\n", i, i);

	puts("Using precision for floating-point numbers");
	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);

	puts("Using precision for strings");
	printf("\t%.11s\n", s);

	return 0;

} // end main function
