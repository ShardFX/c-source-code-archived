/*******************************************************************
Project: Range using Sentinel Loops

Created by: Anwar Haikal bin Ruslan
Date: 2016-09-26
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int range;

	printf("Enter the range or -1 to quit: ");
	scanf("%d", &range);

	while(range != -1){
        int counter = 1;
        while(counter <= range){
            printf("%d ", counter);
            counter++;
        }
        printf("\n\n");
        puts("Do you want to continue? ");
        printf("Enter the range or -1 to quit: ");
        scanf("%d", &range);
	}

	return 0;

}
