/******************************************************************************
Const Arrays
Created by: Anwar Haikal Ruslan
Date: Wed, Oct 26 2016
******************************************************************************/

#include <stdio.h>

void tryToModifyArray(const int b[]); // function prototype

int main(void){
	int a[] = {10,20,30};
	tryToModifyArray(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	getchar();
	return 0;
} // end function main

// in function tryToModifyArray, array b is const, so it cannot be
// used to modify the orignal array b in main 
void tryToModifyArray(const int b[]){
	b[0] /= 2; // error
	b[1] /= 2; // error
	b[2] /= 2;  // error
} // end function tryToModifyArray


