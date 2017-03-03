/*******************************************************************
Project: Function Range

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-05
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int enterNumber(){ // start enterNumber function

    int i = 1; // declare counter
    int a = 0;
    int result = 0;
    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter %d numbers\n", a);
    do{
        int b;
        printf("Number %d: ", i);
        scanf("%d", &b);
        result += b;
        i++;
    }
    while(i <= a);

    printf("\nThe total is %d", result);

} // end enterNumber function

int main(void){ // start main function
    enterNumber();
	printf("\n");
	return 0;
} // end main function
