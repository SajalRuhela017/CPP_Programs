//Sajal_Write a program to make a simple calculator by user input.

#include<stdio.h>

int main(){
	
	int a=100,b=20,sum,diff,pro,div;
	
	sum=a+b;
	diff=a-b;
	pro=a*b;
	div=a/b;
	
	printf("We have a=%d and b=%d.", a, b);
	printf("\nThe sum of these two numbers is %d", sum);
	printf("\nThe differnece of these two numbers is %d", diff);
	printf("\nThe product of these two numbers is %d", pro);
	printf("\nThe quotient of these two numbers is %f", div);
	
	return 0;	
}
