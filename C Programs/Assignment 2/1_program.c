//Sajal_Write a program to find the remainder and quotient of a number.

#include<stdio.h>

int main(){
	
	int a,b,quo,rem;
	
	printf("Enter any two numbers : ");
	scanf("%d %d", &a, &b);
	
	quo=a/b;
	rem=a%b;
	
	printf("The quotient of these two numbers is : %d", quo);
	printf("\nThe remainder of these two numbers is : %d", rem);
	
	return 0;
}
