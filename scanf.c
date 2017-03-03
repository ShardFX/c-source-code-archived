#include <stdio.h>
#include <stdlib.h>

/******************************************************************
    // This is a single line comment (Pre-processor directive)
    /* This is a multiple line comment
    /** This is a documentation comment

    Created by: Anwar Haikal
    Date: September 1 2016
*******************************************************************/

int main(void){ // start main function

    int integer1, integer2, sum; // variables

    printf("Enter any value of type integer to integer1: ");
    scanf("%d", &integer1);
    printf("\nEnter any value of type integer to integer2: ");
    scanf("%d", &integer2);

    sum = integer1 + integer2; // sum equation
    printf("\nSum of %d and %d integers is: %d\n", integer1, integer2, sum); // display output
    printf("\nAddress of %d, %d and %d are:\n\t%d, %d, and %d respectively.\n", integer1, integer2, sum, &integer1, &integer2, &sum);

    return 0;

} // end main function
