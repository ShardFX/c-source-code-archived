/**********************************************************************
Project: Sentinel Control Loops

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-21
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	/*
	int n, i;
    unsigned int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    // show error if the user enters a negative integer
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {
        for(i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial*i;
        }
        printf("Factorial of %d = %d", n, factorial);
    }
    */

    unsigned long long factorial = 1;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
		factorial *= i;
    }

    printf("Factorial of %d! is %llu", n, factorial);

    printf("\n");

    return 0;

}
