/*******************************************************************
Project: Binary to Decimal

Created by: Anwar Haikal bin Ruslan
Date: 2016-10-12
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convertBinaryToDecimal(unsigned long long int n){

    int decimalNumber = 0, i = 0, remainder;

    while (n != 0){
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2,i);
        i++;
    }
    return decimalNumber;
}

int main(){

    unsigned long long int n;
    printf("Enter a binary number: ");
    scanf("%llu", &n);
    printf("%llu in binary = %d in decimal\n", n, convertBinaryToDecimal(n));

    // cheat code
    printf("%d", strtol("10110110", NULL, 2)); // binary to decimal
    printf("\n");
    printf("%d", strtol("3F", NULL, 16)); // hex to decimal
    printf("\n");

    // cheat binary to decimal
    char value[] = "0";
    printf("Enter string (binary to decimal): ");
    scanf("%s", value);
    printf("%d", strtol(value, NULL, 2));

    return 0;
}
