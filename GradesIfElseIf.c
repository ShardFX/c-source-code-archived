#include <stdlib.h>
#include <stdio.h>

int main(void){ // start main function

    int grade;

    printf("Enter your marks: ");
    scanf("%d", &grade);
    printf("\n");


    if(grade >= 70 && grade < 73){
        printf("C");
    }
    else if(grade >= 73 && grade < 77){
        printf("C+");
    }
    else if(grade >= 77 && grade < 80){
        printf("B-");
    }
    else if(grade >= 80 && grade < 83){
        printf("B");
    }
    else if(grade >= 83 && grade < 87){
        printf("B+");
    }
    else if(grade >= 87 && grade < 90){
        printf("A-");
    }
    else if(grade >= 90 && grade < 97){
        printf("A");
    }
    else if(grade >= 97 && grade <= 100){
        printf("A+");
    }
    else if(grade >= 0){
        printf("Failed");
    }
    else{
        printf("Invalid value");
    }

    printf("\n");

    /* Incorrect results tho
    if(grade >= 70){
        if(grade >= 73){
            if(grade >= 77){
                if(grade >= 80){
                    if(grade >= 83){
                        if(grade >= 87){
                            if(grade >= 90){
                                if(grade >= 97){
                                    printf("A+");
                                }
                            }
                            else{
                                printf("A");
                            }
                        }
                        else{
                            printf("A-");
                        }
                    }
                    else{
                        printf("B+");
                    }
                }
                else{
                    printf("B");
                }
            }
            else{
                printf("B-");
            }
        }
        else{
            printf("C+");
        }
    }
    else if(grade < 70){
        printf("Failed");
    }
    else{
        printf("C");
    }
    */

    printf("\n");

    if(grade >= 100){
        printf("Invalid value");
    }
    else if(grade >= 97){
        printf("A+");
    }
    else if(grade >= 90){
        printf("A");
    }
    else if(grade >= 87){
        printf("A-");
    }
    else if(grade >= 83){
        printf("B+");
    }
    else if(grade >= 80){
        printf("B");
    }
    else if(grade >= 77){
        printf("B-");
    }
    else if(grade >= 73){
        printf("C+");
    }
    else if(grade >= 70){
        printf("C");
    }
    else{
        printf("Invalid value");
    }


} // end main function
