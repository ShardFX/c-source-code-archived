/*******************************************************************
Project: Integer Conversion Specifiers

CONVERSION SPECIFIERS
d - display as a signed decimal integer
i - signed decimal integer (scanf)
o - unsigned octal integer (base-8)
u - unsigned decimal integer
x/X - unsigned hexadecimal integer, x displays lowercase, X uppercase
h/l/ll/ell (length modifiers) - Place before any integer conversion specifier, short, long, long long

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){ // start main function

	printf("%d\n", 455);
	printf("%i\n", 455); // i same as d in printf
	printf("%d\n", +455); // plus sign does not print
	printf("%d\n", -455); // minus sign prints
	printf("%hd\n", 32000);
	printf("%ld\n", 2000000000L); // L suffix makes literal a long int
	printf("%o\n", 455); // octal
	printf("%u\n", 455);
	printf("%x\n", 455); // hexadecimal with lowercase letters
	printf("%X\n", 455); // hexadecimal with uppercase letters

	printf("%X\n", 16384); // 4000
	printf("%X\n", 1024); // 400, Because 1024 * 16 = 16384
	printf("%X\n", 64); // 40, 1024 / 16 = 64

	printf("%X\n", 42069);

	return 0;

} // end main function
