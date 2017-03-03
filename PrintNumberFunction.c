/*******************************************************************
Project: User-defined Functions

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-05
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

void testFunction(); // function prototype
int testFRV(); // declare testFRV

void testFunction(){ // start testFunction
    puts("This is a test function\n");
} // end testFunction

int testFRV(){ // start testFRV
    int a, b;
    printf("Enter 2 integer values: ");
    scanf("%d%d", &a, &b);
    printf("\n");
    return a + b;
} // end testFRV

int testFRV2(int a, int b){ // start testFRV2
    return a + b;
} // end testFRV2

float test_parameters(float a, float b){ // start test_parameters
    return a * b;
} // end test_parameters

float test_parameters2(float a, float b){ // start test_parameters2
    return a * b;
} // end test_parameters2

int printNumber(int begin, int end){ // start printNumber
    while(begin <= end){
        printf("%4d ", begin++);
    }
    printf("\n\n");
} // end printNumber

int showAddressFromChar(char a){ // start showAddressFromChar
    return &a;
} // end showAddressFromChar

void printNumber2(int, int); // start printNumber2
printNumber2(int begin, int end){
    while(begin <= end){
        printf("%4d ", begin++);
    }
    printf("\n\n");
} // end printNumber2

int main(void){ // start main

    int test = testFRV();
    int test2 = testFRV2(2, 5);

    float x, y;
    printf("Enter 2 float values: ");
    scanf("%f%f", &x, &y);
    printf("\n");
    float result = test_parameters(x, y);

    int i, j;
    printf("Enter starting int value: ");
    scanf("%d", &i);
    printf("Enter ending int value: ");
    scanf("%d", &j);
    printf("\n");

    printNumber(1, 5);
    printNumber2(i, j);
    testFunction();
    printf("%d\n\n", test);
    printf("%d\n\n", testFRV());
    printf("%f\n\n", result);
    printf("%f\n\n", test_parameters2(12.1, 9));
    printf("%d\n\n", test2);
    printf("%d\n\n", testFRV2(3, 7));
    printf("%d", showAddressFromChar('b'));
    printf("\n");

	return 0;

} // end main
