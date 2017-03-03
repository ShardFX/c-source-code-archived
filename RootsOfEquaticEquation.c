/**********************************************************************
Project: Roots of Quadratic Equation

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-19
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // not needed for new C

int main(void) { // start main function

	// variables, [ax^2 + bx + c]
    double a;
    double b;
    double c;
    double determinant;
    double root1;
    double root2;
    double realPart;
    double imaginaryPart;

    printf("Finding Roots of Quadratic Equation\n\n");
    printf("\tax^2 + bx + c\n\n");
    printf("Enter coefficients for a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
	printf("\n");

    determinant =  (b*b) - 4*a*c; // determinant formula

    //  real but different roots
    if (determinant > 0){
        root1 = (-b + sqrt(determinant))/(2*a);
        root2 = (-b - sqrt(determinant))/(2*a);
        printf("\t The equation has real but different roots. \n");
        printf("\t root1 = %0.3f and root2 = %0.3f", root1 ,root2);
    }
    // real and equal roots
    else if (determinant == 0){
        root1 = root2 = -b/(2 * a);
        printf("\t The equation has real and equal roots. \n");
        printf("\t root1 = root2 = %0.3f;", root1);
    }
    // no real roots
    else if (determinant < 0){
        realPart = -b/(2 * a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        printf("\t The equation has no real roots. \n");
        printf("\t root1 = (%0.3f)+(%0.3f)i and root2 = (%0.3f)-(%0.3f)i", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    printf("\n");

    return 0;

} // end main function
