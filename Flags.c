/*******************************************************************
Project: Right and Left Justifying Values + Flags

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	printf(    "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23); // +ve right justify
	printf("%-10s%-10d%-10c%-10f\n\n", "hello", 7, 'a', 1.23); // -ve left justify

	int c = 1428; // initialize c
	double p = 1427.0; // initialize p

	printf("%#o\n", c);
	printf("%#x\n", c);
	printf("%#X\n", c);
	printf("\n%g\n", p);
	printf("%#g\n\n", p);

	printf("%+09d\n", 452);
	// printf("%.9d\n", 452); // not good practice
	printf("%09d\n", 452);

	int a = 123;
	int i;

	printf("%d \b", a); // 123, because of whitespace
	printf("\n");
	printf("%d", a);
	printf("\n");
	printf("\b %d \b", a);
	printf("\n");

	for(i = 1; i <= 3; i++){
		printf("%d \b", a);
	}

	return 0;

} // end main function
