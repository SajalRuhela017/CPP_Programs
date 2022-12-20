//Sajal
//20238
//Program 6
//Write a program to find the factorial of a number using recursion.

#include <stdio.h>
int factorial(int a) {
	if(a<=1){
		return 1;
	}
	return a * factorial(a-1);
	}

int main() {
	int a;
	printf("Enter any number : ");
	scanf("%d", &a);
	printf("Factorial of %d is %d\n", a, factorial(a));
	return 0;
}
