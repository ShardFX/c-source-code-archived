#include <stdio.h>
#define SIZE 10

int array[SIZE]; // unsigned long int

void readArray(void){
	for(register int j = 0; j < SIZE; j++){
		printf("Enter value %d: ", j+1);
		scanf("%d", &array[j]);
	}
	printf("\n");
}

void displayArray(void){
	for(register int i = 0; i < SIZE; i++){
			printf("%d\t", array[i]);
	}
	printf("\n\n");
}

void sumArray(void){
	int sum = 0;
	printf("Sum of array is: ");
	for(register int i = 0; i < SIZE; i++){
		sum += array[i];
	}
	printf("%d\n", sum);
}

int main(void){
	readArray();
	displayArray();
	sumArray();
	getchar();
	getchar();
	return 0;
}
