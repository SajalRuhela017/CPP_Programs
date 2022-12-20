//Sajal
//20238
//Problem 1
//Write a program to find the Fibonacci series till n, n is input by user using non-recursive function.

#include<stdio.h>

int main(){
	int n,a=0,b=1,s;
	printf("Enter number of terms you want to print : ");
	scanf("%d", &n);
	printf("%d Terms of the Fibonacci Series is \n%d\t%d", n, a, b);
	for(int i=1;i<=n-2;i++){
		s=a+b;
		printf("\t%d", s);
		a=b;
		b=s;
	}
	return 0;
}
