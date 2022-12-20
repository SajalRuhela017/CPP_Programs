//Sajal
//20238
//Program 5
//Write a program to find the factorial of a number using for loop.

#include<stdio.h>

int main(){
	int n, fact=1;
	printf("Enter any number : ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	printf("The factorial of %d is : %d", n, fact);
	return 0;
}
