/*******************************************************************
Project: Inputting data with a field width

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-17
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	int x;
	int y;

	printf("%s", "Enter a six digit integer: ");
	scanf("%2d%d", &x, &y);

	printf("The integers input were %d and %d\n", x, y); // 123456777 --> ... were 12 and 3456777

	return 0;

} // end main function
