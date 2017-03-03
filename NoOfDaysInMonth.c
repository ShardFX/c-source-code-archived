/*************************************************************************
No. of Days in a Month

Created by: Anwar Haikal bin Ruslan
Date: 2016-9-19
*************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){

    int month;
    int year;
    int leapYear;
    time_t current_time;
    char* c_time_string;

    current_time = time(NULL); // obtain current time
    c_time_string = ctime(&current_time); // convert to local time format
    printf("Current time is %s\n", c_time_string); // print


    printf("Please enter a month: ");
    scanf("%d", &month);

    /*
    if(month == 1){
        printf("January: 31 days");
    }
    else if(month == 2){
        printf("February: 29 days");
    }
    else if(month == 3){
        printf("March: 31 days");
    }
    else if(month == 4){
        printf("April: 30 days");
    }
    else if(month == 5){
        printf("May: 31 days");
    }
    else if(month == 6){
        printf("June: 30 days");
    }
    else if(month == 7){
        printf("July: 31 days");
    }
    else if(month == 8){
        printf("August: 31 days");
    }
    else if(month == 9){
        printf("September: 30 days");
    }
    else if(month == 10){
        printf("October: 31 days");
    }
    else if(month == 11){
        printf("November: 30 days");
    }
    else if(month == 12){
        printf("December: 31 days");
    }


    if((month == 1) || (month == 3) ||(month == 5) ||(month == 7) ||(month == 8) ||(month == 10) ||(month == 12)){
        printf("31 days");
    }
    else if((month == 4) ||(month == 6) || (month == 9) || (month == 11)){
        printf("30 days");
    }
    else if(month == 2){
        printf("Is it a leap year? (1 for yes | 2 for no) ");
        scanf("%d", &leapYear);

        if(leapYear == 1){
            printf("29 days");
        }
        else if(leapYear == 2){
            printf("28 days");
        }
        else{
            printf("Invalid value");
        }
    }
    else{
        printf("invalid month");
    }
    */

    switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 2:
        printf("Enter year: ");
        scanf("%d", &year);
        if(year % 4 == 0){
            printf("29 days");
        }
        else{
            printf("28 days");
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    default:
        printf("Invalid month");
        break;
    }

    printf("\n\n");

    int restart;

    printf("Restart? (1 for yes | 2 for no) ");
    scanf("%d", &restart);

    switch(restart){
    case 1:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        main();
        break;
    case 2:
        close();
        break;
    default:
        close();
        break;
    }

    return 0;

}
