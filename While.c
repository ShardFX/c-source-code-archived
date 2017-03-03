/***********************************************************
Project: While Statement

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-19
***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){


	int i  = 0;
	int i2 = 0;
	int i3 = 10;
	int i4;
	int i5 = 0;

    /*
	while(i <= 4){
        printf("%d", i++);
	}
	*/

	/*
	// blank block
	while(i2 <= 4) // ;
        printf("%d", i++);
    */

    /*
    while(i3 > 0){
        printf("testing while");
    }
    */


    while(i4 = 0){ // infinite-loop when != 0
        printf("Testing while");
        // i4++;
    }
    printf("Power of while");

    printf("\n");

    do{
        printf("%d", i++);
    }
    while(i >= 4);

	printf("\n");

    // system("pause");

    return 0;

}
