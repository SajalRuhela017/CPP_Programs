//Sajal
//20238
//Program_3
//Write a program to find the sum and average or marks input by user in five subjects using function.

#include<stdio.h>

int result(int *marks, int n){
	int sum=0,avg;
	for(int i=0;i<n;i++){
		sum+=marks[i];
	}
	printf("The total marks obtained by student is %d", sum);
	avg=sum/n;
	printf("\nThe avergae marks scored is : %d", avg);
}

int main(){
	
	int marks[10];
	int n;
	printf("Enter number of subjects : ");
	scanf("%d", &n);
	printf("Enter marks of student : \n");
	for(int i=0;i<n;i++){
		scanf("%d", &marks[i]);
	}
	result(marks,n);
	return 0;
}
