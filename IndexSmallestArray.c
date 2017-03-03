/**************************************************************************************************
Finding Index of Smallest Element in Array of Double

Write a function that returns the index of the smallest element in an array of double. If the number of such elements is greater than 1, return the smallest element index. Use the following header:

int indexOfSmallestElement(double[] array)

Created by: Anwar Haikal bin Ruslan
Date: Friday, October 28th 2016
**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* global variables */
unsigned int size; // global size of array
double array[1000];

/* function prototypes */
int indexOfSmallestElement();

/* functions */
int indexOfSmallestElement(double array[]){

    double smallest = array[0]; // smallest value in the array
    int index = 0; // index that contains smallest value

    // finds smallest value and the index
    for(register size_t i = 1; i < size; i++){
        if (array[i] < smallest) {
            index = i;
            smallest = array[i];
        }
    } // end for

    printf("\nSmallest element is located at array[%d] and the value = %0.3f\n", index, smallest); // display output

    return EXIT_SUCCESS;
} // end function indexOfSmallestElement

int main(void){

    // display and prompts user input for size and values for the array
    puts("This program returns the index of the smallest element in an array of double\n");
    printf("Please enter the size of the array: ");
    scanf("%u", &size);
    puts("");

    double array[size]; // declare array size

    // prompts and store value onto array[]
    for(register size_t i = 0; i < size; i++){
        printf("Please enter the value of array[%lu]: ", i);
        scanf("%lf", &array[i]);
    } // end for loop

    indexOfSmallestElement(array); // initialize function indexOfSmallestElement
    
    getchar();
    return EXIT_SUCCESS;
} // end function main
