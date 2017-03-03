#include <stdio.h>
#include <stdlib.h>

/************************************************************
Increment (Unary Operators)
Date: September 7 2016
Created by: Anwar Haikal bin Ruslan
*************************************************************/

// a++ = post-increment
// ++a = pre-increment

int main(void){ // start main function

    // Variables from Q1 to Q9
    int a1 = 10;
    int x2 = 5;
    int z2 = x2++;
    int m3 = 4;
    int m4 = 30;
    int x4 = ++m4;
    int x5 = 9;
    int x6 = 9;
    int y6 = x6--;
    int m7 = 8;
    int m8 = 16;
    int n8 = m8--;
    int m9 = 15;
    int n9 = --m9;

    // Display output
    printf("\n");
    printf("\t%d\n", a1++);   // 10
    printf("\t%d\n", a1);     // 11
    printf("\t%d\n", z2);     // 5
    printf("\t%d\n", x2);     // 6
    printf("\t%d\n", ++m3);   // 5
    printf("\t%d\n", m3);     // 5
    printf("\t%d\n", x4);     // 31
    printf("\t%d\n", m4);     // 31
    printf("\t%d\n", x5--);   // 9
    printf("\t%d\n", x5);     // 8
    printf("\t%d\n", y6);     // 9
    printf("\t%d\n", x6);     // 8
    printf("\t%d\n", --m7);   // 7
    printf("\t%d\n", m7--);   // 7
    printf("\t%d\n", m7);     // 6
    printf("\t%d\n", m8);     // 15
    printf("\t%d\n", n8);     // 16
    printf("\t%d\n", m9);     // 14
    printf("\t%d\n", n9);     // 14

} // end main function
