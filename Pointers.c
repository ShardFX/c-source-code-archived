/*******************************************************************
Project:

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-10
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

	int  var = 20;   /* actual variable declaration */
    int  *ip;        /* pointer variable declaration */

    ip = &var;  /* store address of var in pointer variable*/

    printf("Address of var variable: %X\n", &var  );

    /* address stored in pointer variable */
    printf("Address stored in ip variable: %X\n", ip );

    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip );

    int  *ptr = NULL;

    printf("The value of ptr is : %x\n\n", ptr  );

    int c;
    for(c = 0; c <= 255; c++){
        printf("%c\t", c);
    }
    printf("\n");

    return 0;

} // end main function
