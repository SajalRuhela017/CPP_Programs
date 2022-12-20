//Sajal
//20238
//Program_1
//Write a program that first input the five numbers (between 1 and 30). For 
//every number input, the program should print a line having that number of
//asterisks (for e.g. if user will input 7, then it should print *******), in total it
//displays five rows of asterisks.

#include <stdio.h>

int main(){
	
    int NUM[5];
    printf("Enter the elements of array between 1 to 30 : ");
    for(int i=0;i<5;i++){
    	scanf("%d", &NUM[i]);
	}
	for(int j=0;j<5;j++){
		for(int k=1;k<=NUM[j];k++){
			printf("*");
		}
		printf("\n");
	}
    return 0;
}
