/*******************************************************************
Project: Sum of Natural Numbers

Sum of natural numbers
a. non-recursion
b. recursion

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-17
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

unsigned int nonRecNumbers(unsigned int x){
    unsigned int result = 0;
    for(int i = x; i >= 1; i--){
        result += i;
    }
    return result;
}

unsigned int recNumbers(unsigned int x){
    if(x != 0){
        return x + recNumbers(x - 1);
    }
    else{
        return x;
    }
}

int main(void){ // start main function

    int n;

    // non recursive
    printf("Enter a value (non recursive): ");
    scanf("%d", &n);
    printf("Sum of %d is %d\n\n", n, nonRecNumbers(n));

    // recursive
    printf("Enter a value (recursive): ");
    scanf("%d", &n);
    printf("Sum of %d is %d\n\n", n, recNumbers(n));

	return 0;

} // end main function
