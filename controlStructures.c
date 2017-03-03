#include <stdio.h>
#include <stdlib.h>

/************************************************************
Control Structures
Date: September 8 2016
Created by: Anwar Haikal bin Ruslan
*************************************************************/


int main(void){ // start main function

    // #################### Example 1 ######################
    int a1 = 10;
    printf("\n");
    if(a1 > 10){ // if control statement
        printf("1. a is greater than 10.\n");
    }

    // #################### Example 2 ######################
    int a2 = 10;
    if(a2 < 100){
        printf("2. a is less than 100\n");
    }

    // #################### Example 3 ######################
    int a3 = 1000;
    if(a3 < 100); {
        printf("3. a is less than 100\n");
    }
    printf("3. Testing if block\n");

    /*
        if (a<100); // nothing is loaded, not an error
        {
            // empty block, will output this.
        }
    */

    // ########23############ Example 4 ######################
    int grade4 = 60;
    if(grade4 >= 60) {
        printf("4. Passed\n");
    }
    else {
        printf("4. Failed\n");
    }

    // #################### Example 5 ######################
    // Using ternary operator
    int grade5 = 60;
    puts((grade5 >= 60)? "5. Passed":"5. Failed"); // puts function
    printf("%s",(grade5 >= 70)? "5. Passed\n":"5. Failed\n"); // Alternative to puts function




} // end main function
