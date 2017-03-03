/*******************************************************************
Project: GPA Calculator

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-26
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){ // start main function

	float grade;
	float GPA = 0;
	float totalGPA = 0;
	float marks;
	float totalCreditHours;
	float creditHours;
	float CGPA = 0;
	float totalCGPA = 0;
	int subjects;
    int semesters;

    printf("\n\t\t\tCGPA Calculator by Anwar Haikal\n\n");
	printf("How many semesters do you want to calculate? ");
	scanf("%d", &semesters);
	printf("\n");

	for(int i = 1; i <= semesters; i++){

        printf("How many subjects in semester %d? ", i);
        scanf("%d", &subjects);
        printf("\n");

        for(int i = 1; i <= subjects; i++){

            printf("How many credit hours for subject %d: ", i);
            scanf("%f", &creditHours);
            printf("What is your marks for subject %d: ", i);
            scanf("%f", &marks);
            printf("\n");

            if(marks >= 90 && marks <= 100){
                grade = 4.0;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 87 && marks < 90){
                grade = 3.7;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 84 && marks < 87){
                grade = 3.4;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 80 && marks < 84){
                grade = 3.0;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 77 && marks < 80){
                grade = 2.7;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 74 && marks < 77){
                grade = 2.4;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 70 && marks < 74){
                grade = 2.0;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
            else if(marks >= 0 && marks < 70){
                grade = 0.0;
                GPA += grade * creditHours;
                totalCreditHours += creditHours;
            }
        }
        totalGPA = GPA / totalCreditHours;
        printf("\tYour GPA for semester %d is %.2f\n\n", i, totalGPA);
        CGPA += totalGPA;
	}
	totalCGPA = CGPA / semesters;
	printf("\tYour CGPA is %.2f", totalCGPA);
	printf("\n\n");

	return 0;

} // end main function
