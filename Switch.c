#include <stdio.h>
#include <stdlib.h>

int main(void){

    int month;

    printf("\nPlease enter month: ");
    scanf("%d", &month);
    printf("\n");

    switch(month){
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid month.");
        break;
    }

    printf("\n\n");

    int restart;

    printf("Restart? (1 for yes | 2 for no) ");
    scanf("%d", &restart);

    switch(restart){
    case 1:
        main();
        break;
    case 2:
        close();
        break;
    default:
        close();
        break;
    }

    printf("\n");
    return 0;

}
