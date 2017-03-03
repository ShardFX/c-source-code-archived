/**********************************************************************
Project: Even & Odd Numbers

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-19
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

    int a = 1;
    int b = 1;

    // Even numbers
    printf("\t\t\t\tEven numbers\n");
	while(a <= 100){
        if(a % 2 == 0){
            printf("%d\t", a++);
        }
        else{
            a++;
        }
	}

	printf("\n\n");

	// Odd numbers
	printf("\t\t\t\tOdd numbers\n");
	do{
        if(b % 2 == 1){
            printf("%d\t", b++);
        }
        else{
            b++;
        }
	}
	while (b <= 100);

	printf("\n");

	return 0;

} // end main function
