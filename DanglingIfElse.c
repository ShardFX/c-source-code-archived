#include <stdlib.h>
#include <stdio.h>

// Dangling if-else statements

int main(void){ // start main function

    int x;
    int y;

    printf("Please enter a value for int x and y: ");
    scanf("%d %d", &x, &y);
    printf("\n");

    if (x>5){
        if (y>5){
            printf("1. x & y > 5");
        }
    }
    else {
        printf ("1. x & y < 5");
    }

    printf("\n");

    if (x>5){
        if (y>5){
            printf("2. x & y > 5");
        }
        else {
        printf ("2. x & y < 5");
        }
    }

    printf("\n");

} // end main function
