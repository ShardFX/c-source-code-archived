/*******************************************************************
Project: Reading input with integer conversion specifiers

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-12
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	int a, b, c, d, e, f, g;

	puts("Enter seven integers: ");
	scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);

	puts("\nThe input displayed as decimal integers is: ");
	printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);

	return 0;

} // end main function
