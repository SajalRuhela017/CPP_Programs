//Sajal
//20238
//Write a program to search a number in given list of numbers. Display the location of the number also.
//	I. If the occurance of the number is once
//	II. If the occurance of the number is mre than one time

#include<stdio.h>

int main(){
	
	int array1[5]={10,20,30,40,50};
	int array2[5]={10,20,10,30,10};
	
	for(int i=0;i<5;i++){
		if(array1[i]==10){
			printf("The index of element 10 is : %d", i);
			break;
		}
	}
	printf("\nThe indices of element 10 are : ");
	for(int j=0;j<5;j++){
		if(array2[j]==10){
			printf("%d, ", j);
		}
	}
	return 0;
} 
