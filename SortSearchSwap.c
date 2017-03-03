/**************************************************************************************************
Swapping, Sorting & Searching

Swapping:
	temp = a
	a = b
	b = temp
	
Sorting:
	bubble
	selection
	merge
	quick
	heap
	radix
	
Searching:
	linear
	binary
	DFS (Depth)
	BFS (Breadth)
	
Created by: Anwar Haikal Ruslan
Date: Wednesday, November 2nd 2016, 1:37PM
**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE_B 10
#define SIZE_L 5

/* function prototypes */
void bubbleSort(void); 
size_t linearSearch(const int array[], int key, size_t size);
void readSearch(void);

/* functions */
void bubbleSort(void){

	int a[SIZE_B] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int pass;
	size_t i;
	int hold;
	
	puts("Data items in original order");
	
	// output
	for(i = 0; i < SIZE_B; ++i){
		printf("%4d", a[i]);
	} // end for
	
	
	// bubble sort
	for(pass = 1; pass < SIZE_B; ++pass){
		for(i = 0; i < SIZE_B - 1; ++i){
			if(a[i] > a[i + 1]){ // decreasing order if "<"
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			} // end if
		} // end for
	} // end for
	
	puts("\nData items in asending order");
	
	
	// output
	for(i = 0; i < SIZE_B; ++i){
		printf("%4d", a[i]);
	} // end for
	
	puts("\n");
} // end function bubbleSort

size_t linearSearch(const int array[], int key, size_t size){

	size_t n;
	
	for(n = 0; n < size; ++n){
		if(array[n] == key){
			return n;
		} // end if
	} // end for
	
	return -1;
	
} // end function linearSearch

void readSearch(void){

	int a[SIZE_L];
	size_t x;
	int searchKey;
	size_t element;
	
	for(x = 0; x < SIZE_L; ++x){
		a[x] = 2 * x;
		printf("%4d", a[x]);
	} // end for
	
	puts("\nEnter integer search key:");
	scanf("%d", &searchKey);
	
	element = linearSearch(a, searchKey, SIZE_L);
	
	if(element != -1){
		printf("Found value in element %d\n", element);
	}
	else{
		puts("Value not found");
	}
	
	puts("");
} // end function readSearch

int main(void){
	
	// run functions
	bubbleSort();
	readSearch();
	
	getchar();
	return 0;
} // end function main

