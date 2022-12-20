/*Sajal_20238_problem 3
Write a program to input two values a,b and evaluate the expression
a. (a+b)^2
b. (a-b)^2*/

#include<stdio.h>

int main(){
	
	int a,b,i,ii;
	
	printf("Enter the value of a and b : ");
	scanf("%d %d", &a, &b);
	
	i = a*a + 2*a*b + b*b;
	ii = a*a - 2*a*b + b*b;
	
	printf("The value of (a+b)^2 : %d", i);
	printf("\nThe value of (a-b)^2 : %d", ii);
	
	return 0;
}
