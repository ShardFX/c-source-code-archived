/*******************************************************************
Project: Right Justifying Integers

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	printf("%4d\n", 1);
	printf("%4d\n", 12);
	printf("%4d\n", 123);
	printf("%4d\n", 1234);
	printf("%4d\n\n", 12345);

	printf("%4d\n", -1);
	printf("%4d\n", -12);
	printf("%4d\n", -123);
	printf("%4d\n", -1234);
	printf("%4d\n\n", -12345);

	printf("%12.2f\n", -33287.456);
	printf("%-12.2f\n", -33287.456);

	return 0;

} // end main function
