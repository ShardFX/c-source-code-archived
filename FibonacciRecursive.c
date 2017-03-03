/*******************************************************************
Project: Fibonacci Series

Output Fibonacci based on user input
Uses recursive and non recursive functions

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-17
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* prototype */
unsigned long long int nonRec(int n){
    long int prev = -1, result = 1, sum;
	register int i;
	for(i = 0; i <= n; ++i){
		sum = result + prev;
		prev = result;
		result = sum;
	}
	return result;
} // end nonRec

unsigned long long int recCalc(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (recCalc(n - 1) + recCalc(n - 2));
    }
}  // end recCalc

int main(void){
    int n;
    unsigned int i = 0,i2 = 0;
    register int c;

    printf("%s", "Enter a value: ");
    scanf("%d", &n);

    if(n >= 0){
        /* Non-recursive Fibonacci */
        puts("\nNon-recursive Fibonacci output: \n");
        for(c = 1; c <= n; c++){
            printf("%-16d", nonRec(i));
            i++;
        }
        printf("\n");

        /* Recursive Fibonacci */
        puts("\nRecursive Fibonacci output: \n");
        for(c = 1; c <= n; c++){
            printf("%-16d", recCalc(i2));
            i2++;
        }
        printf("\n");
        return EXIT_SUCCESS;
    }
    else{
        close();
        puts("\nERROR 1: Invalid input!");
        return EXIT_FAILURE;
    }

	return 0;
} // end main function
