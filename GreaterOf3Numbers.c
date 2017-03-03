#include <stdlib.h>
#include <stdio.h>

int main(void){ // start main function

    // variables
    double a;
    double b;
    double c;

    printf("Enter 3 values: "); // prompt
    scanf("%lf %lf %lf", &a, &b, &c); // read and write values


    // c doesn't work
    if(a > b){
        if(a > c){
            printf("%.2f is the largest number.", a);
        }
        else if(c > a){
            printf("%.2f is the largest number.", c);
        }
    }
    else{
        if(b > c){
            printf("%.2f is the largest number.", b);
        }
        else if (c > b){
            printf("%.2f is the largest number.",c);
        }
    }


    printf("\n");

    /* Not accurate
    // if-else
    if(a > b){
        if(a > c){
            printf("%.2f is the largest number.", a);
        }
    }
    else if(b > a){
        if(b > c){
            printf("%.2f is the largest number.", b);
        }
    }
    else if(c > a){
        if(c > b){
            printf("%.2f is the largest number.", c);
        }
    }
    */

    printf("\n");
    return 0;

} // end main function
