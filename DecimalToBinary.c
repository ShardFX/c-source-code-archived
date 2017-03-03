/*******************************************************************
Project: Decimal to Binary

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(){ // start decimalToBinary

    size_t n;
    unsigned long long int remainder = 0;
    unsigned long long int binary = 0;
    size_t i = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0){
        remainder = n % 2;
        n = n / 2;
        binary += (remainder * i);
        i *= 10;
    } // end while

    printf("Binary is %08llu", binary);

} // end decimalToBinary

int main(void){ // start main function

    decimalToBinary();
	printf("\n");
	return 0;

} // end main function
