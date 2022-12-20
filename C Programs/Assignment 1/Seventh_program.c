//Sajal_Write a program to find the sum and average of marks in five subjects of a student.

#include<stdio.h>

int main(){
	
	int m1,m2,m3,m4,m5;
	float avg,sum;
	
	printf("Enter the marks of the student in first subject : ");
	scanf("%d", &m1);
	printf("\nEnter the marks of the student in second subject : ");
	scanf("%d", &m2);
	printf("\nEnter the marks of the student in third subject : ");
	scanf("%d", &m3);
	printf("\nEnter the marks of the student in fourth subject : ");
	scanf("%d", &m4);
	printf("\nEnter the marks of the student in fifth subject : ");
	scanf("%d", &m5);
	
	sum=m1+m2+m3+m4+m5;
	avg=(sum/5);
	
	printf("\nThe sum of the marks of all subjects is : %f", sum);
	printf("\nThe average of the marks scored by the student is : %f", avg);
	
	return 0;
	
}
