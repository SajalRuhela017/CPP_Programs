//Write a program to make a simple calculator by taking some initial values.

#include<stdio.h>

int main(){
	
	int b, sum, diff, pro;
	float a,div;
	
	printf("Enter any two integer values : ");
	scanf("%f", &a);
	scanf("%d", &b);
	
	sum=a+b;
	diff=a-b;
	pro=a*b;
	div=a/b;

	
	printf("We have %f, %d", a, b);
	printf("\nThe sum of these two numbers is %d", sum);
	printf("\nThe differnece of these two numbers is %d", diff);
	printf("\nThe product of these two numbers is %d", pro);
	printf("\nThe quotient of these two numbers is %f", div);

	
	return 0;
	
}
