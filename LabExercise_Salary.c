#include <stdlib.h>
#include <stdio.h>

/********************************************************************
LAB EXERCISE 1

Created by: Anwar Haikal bin Ruslan
Date: September 8th 2016

Philip's basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.
**********************************************************************/

int main(void){ // start main function

    double salary = 0; // declare & initialize salary

    printf("Please enter salary: $"); // prompt salary

    scanf("%lf", &salary); // read input, double is "%lf" for scanf

    // equations
    double dearnessAllowance = 0.4 * salary;
    double houseRent = 0.2 * salary;
    double grossSalary = salary + dearnessAllowance + houseRent;

    // display details
    printf("\nBasic salary\t\t: $%.2f\n", salary);
    printf("Dearness allowance\t: $%.2f\n", dearnessAllowance);
    printf("House rent allowance\t: $%.2f\n", houseRent);
    printf("Gross salary\t\t: $%.2f\n", grossSalary);

} // end main function
