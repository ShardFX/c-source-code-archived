/*******************************************************************
Project: Recursion of Factorial Numbers

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-17
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int recFact(int);

unsigned long long int factorial(unsigned int i){ // custom
    if(i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int factorial2(int x){ // non recursive
    int f = 1, i;
    for(i = x; i >= 1; i--){
        f = f * i;
    }
    return f;
}

int recFact(int x){ // recursive function
    int f;
    if(x == 1){
        return 1;
    }
    else{
        f = x * recFact(x - 1);
    }
    return f;
}

int  main() {

    // custom
    int i;
    puts("Finding factorial numbers");
    printf("Enter an integer (Custom): ");
    scanf("%d", &i);
    if(i < 0){
        return;
    }
    else{
        printf("Factorial of %d is %llu\n\n", i, factorial(i));
    }

    // non-recursive
    int a, fact;
    printf("Enter an integer (Non-recursive): ");
    scanf("%d", &a);
    fact = factorial(a);
    printf("Factorial value = %d\n\n", fact);

    // recursive
    int a2, fact2;
    printf("Enter an integer (Recursive): ");
    scanf("%d", &a2);
    fact2 = recFact(a2);
    printf("Factorial value = %d\n", fact2);

    /*
    int i, f;
    printf("Enter an integer: ");
    scanf("%d", &i);
    for (i = f; i >= 1; i--){
        int factorial = 1 * f;
    }
    printf("factorial = %d", factorial);
    */

    return 0;
}
