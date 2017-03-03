/*******************************************************************
Project: Reading and discarding characters from input stream

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-17
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	int month1;
	int day1;
	int year1;
	int month2;
	int day2;
	int year2;

	printf("%s", "Enter a date in the form mm-dd-yyyy: ");
	scanf("%d%*c%d%*c%d", &month1, &day1, &year1);

	printf("month = %d   day = %d   year = %d\n\n", month1, day1, year1);

	printf("%s", "Enter a date in the form mm/dd/yyyy: ");
	scanf("%d%*c%d%*c%d", &month2, &day2, &year2);

	printf("month = %d   day = %d   year = %d\n\n", month2, day2, year2);

	return 0;

} // end main function
