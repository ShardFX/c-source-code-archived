/*******************************************************************
Project: Recursion

Calling a function on itself repeatedly

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-17
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int testRecur(int);

int testRecur(int x){
    printf("%d", x);
    x++;
    return testRecur(x);
}

int main(void){ // start main function
	int a;
	printf("Enter any integer: ");
	scanf("%d", &a);
	printf("%d", testRecur(a));
	return 0;
} // end main function
