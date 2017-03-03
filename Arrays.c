/******************************************************************************
Arrays
Created by: A. Haikal Ruslan
Date: Mon, Oct 24 2016, 12:54 PM
******************************************************************************/

#include <stdio.h>
#define SIZE 10

void func1();
void func2();
void func3();
void func4();
void func5();

int main () {

	// ########################################################################
	int n[10]; /* n is an array of 10 integers */
	register int i, j;
	/* initialize elements of array n to 0 */         
	for (i = 0; i < 10; i++) {
		n[ i ] = i + 100; /* set element at location i to i + 100 */
	}
	/* output each array element's value */
	for (j = 0; j < 10; j++) {
		printf("Element[%d] = %d\n", j, n[j] );
	}
	printf("\n");
	
	// ########################################################################
	int ages[10];
	for(int x = 0; x < 10; x++){
		ages[x] = x + 1;
	}
	for(int y = 0; y < 10; y++){
		printf("%d\n", ages[y]);
	}
	printf("\n");
	
	// ########################################################################
	int agesReversed[10];
	for(register int i = 9; i >= 0; i--){
		agesReversed[i] = i;
	}
	for(register int j = 9; j >= 0; j--){
		printf("%d\n", agesReversed[j]);
	}
	printf("\n");
	
	// ########################################################################
	// int a[5] = {1,2,3,4,5};
	int x[5];
	for(register int i = 0; i < 5; i++){
		printf("%d\n", x[i]); // 5 is garbage value, not initialized
	}
	printf("\n");
	
	// ########################################################################
	// int tez[4] = {1,2,3,4,5,6}; // error, too many initializations
	int test1[100] = {0}; // all is 0, {!0} will be first index
	int test2[] = {1,2,3,4,5,6,100,200,2000};
	for(int i = 0; i <= 100; i++){
		printf("%d\t", test1[i]);
	}
	printf("\n\n");
	
	for(int i = 0; i <= 12; i++){
		printf("%d\t", test2[i]);
	}
	printf("\n\n");
	
	// ########################################################################
	int test[10];
	test[3] = 50000;
	test[9] = 250; // undeclared indices will be garbage values
	printf("%d\n\n", test[9]);
	
	for(register int k = 0; k < 10; k++){
		printf("Value of [%d] = %d\n", k, test[k]);
	}
	printf("\n");
	
	// functions
	func1();
	func2();
	// func3(); // array index cannot be negative 
	func4();
	func5();
	
	// end
	getchar();
	return 0;
}
	
	void func1(){
		size_t test[5]; // size_t is unsigned long int
		for(register int i = 0; i < 5; i++){
			printf("%lu\n", test[i]);
		}
		printf("\n\n");
	} // end function func1
	
	/*
	llu struct
	*/
	
	void func2(){
		int test[SIZE], i;
		for(i = 0; i < SIZE; i++){
			printf("%d\n", test[i]);
		}
		printf("\n\n");
	} // end function func2
	
	/*
	void func3(){
		int test[-10], i;
		for(i = 0; i < 10; i++){
			printf("%d\n", test[i]);
		}
		printf("\n\n");
	} // end function func3
	*/
	
	void func4(){
		int test[SIZE], i;
		for(size_t j = 0; j <= SIZE; j++){
			printf("Enter 10 values: ");
			scanf("%d", &test[j]);
		}
		printf("\n");
		for(i = 0; i <= SIZE; i++){
			printf("%d\n", test[i]);
		}
		printf("\n\n");
	} // end function func4
	
	// read array, display sum
	void func5(){
		int test[SIZE], i;
		for(size_t j = 0; j <= SIZE; j++){
			printf("Enter 10 values: ");
			scanf("%d", &test[j]);
		}
		printf("\n");
		for(i = 0; i <= SIZE; i++){
			printf("%d\n", test[i]);
		}
		printf("\n\n");
	} // end function func5
	

	

