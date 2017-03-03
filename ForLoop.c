/**********************************************************************
Project: Using for loop

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-21
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i = 1;
    int counter;

    /*
	for(;i <= 10;){
        printf("%d", i);
	}
	*/

	/*
	for(;i <= 10; printf("%d", i++));
    */

	/*
	// it will print infinitely
	while(0){ // print infinitely unless == 0
        puts("come to class regularly");
	}
    */

    printf("test\n");

    for(counter = 1; counter < 10; counter++){
        if(counter == 5)
            break; // exit completely // only in loops
        printf("%d", counter);
    }

    printf("\n");

    for(counter = 1; counter < 10; counter++){
        if(counter == 5)
            continue; // skip 5 // continue can only be used inside loops
        printf("%d", counter);
    }

    printf("\n");

    for(counter = 1; counter < 10; counter++){
        if(counter == 5)
            return;
        printf("%d", counter);
    }

    printf("test\n");

    printf("\n");

    int noOfStars = 1;

    printf("No. of stars in sky: \n");
    for(; ; ){
        printf("%d", noOfStars++);
    }

	printf("\n");
	return 0;

}
