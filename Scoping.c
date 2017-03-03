/*******************************************************************
Project: Scoping

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-19
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* function prototype */
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; // global variable

int main(void){ // start function main
    int x = 5; // local variable main
    printf("local x in outer scope of main is %d\n", x);
    { // start new scope
        int x = 7; // local variable new scope
        printf("local x in inner scope of main is %d\n", x);
    } // end new scope
    printf("local x in outer scope of main is %d\n", x);
    useLocal(); // auto local x
    useStaticLocal(); // static local x
    useGlobal(); // global x
    useLocal(); // reinitializes auto local x
    useStaticLocal(); // static local x retains its prior value
    useGlobal(); // global x also retains its value
    useStaticLocal();
    printf("\nlocal x in main is %d\n", x);
	return 0;
} // end function main

/* useLocal reinitializes local variable x during each call */
void useLocal(void){
    int x = 25; // initialized each time useLocal is called
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before entering useLocal\n", x);
} // end function useLocal

/* useStaticLocal initializes static local variable x only the first time
the function is called; the value of x is saved between calls to this
function */
void useStaticLocal(void){
    // initialized once before program startup
    static int x = 50;
    printf("\nlocal x in useStaticLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useStaticLocal is %d before entering useLocal\n", x);
} // end function useStaticLocal

/* function useGlobal modifies global variable x during each call */
void useGlobal(void){
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
} // end function useGlobal
