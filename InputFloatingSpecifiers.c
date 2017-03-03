/*******************************************************************
Project: Reading input with floating-point conversion specifiers

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-12
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	double a, b, c;

	puts("Enter three floating-point numbers: "); // 1.27987 1.27987e+03 38476e-06
    scanf("%le%lf%lg", &a, &b, &c);

    puts("\nHere are the numbers entered in plain: ");
    puts("Floating-point notation: \n");
    printf("%f\n%f\n%f\n", a, b, c);

	return 0;

} // end main function
