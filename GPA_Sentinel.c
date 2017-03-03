/*******************************************************************
Project: GPA Calculator Sentinel Controlled

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-26
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){ // start main function

    const SENTINELNUM = -1;
    const HIGHESTMARK = 4;
	double grade;
	int count = 0;
	double total = 0;
	double gpa;

    do{
        printf("Enter grade or -1 to exit program ");
        scanf("%lf", &grade);

        if(grade >= 0 && grade <= HIGHESTMARK){
            total += grade;
            count += 1;

        }
        else if(grade == SENTINELNUM){
            break;
        }
        else{
            printf("Error\n");
            break;
        }
    }
    while(grade != SENTINELNUM);

    gpa = total / count;

    if(count != 0){
        printf("\n\t\tCGPA is %.2f", gpa);
    }
    else{
        printf("No value entered");
    }

	printf("\n");

	return 0;

} // end main function
