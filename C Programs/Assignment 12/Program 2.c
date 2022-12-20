//Sajal
//20238
//Problem 2
//Write a program to find the Fibonacci series using recursive function. 

#include<stdio.h>

int fib(int n){
	if(n==0 || n==1){
		return n;
	}else{
		return(fib(n-1)+fib(n-2));
	}
}

int main(){
	int n,s=0;
	printf("Enter number of terms you want to print : ");
	scanf("%d", &n);
	printf("%d terms of the Fibonacci series is : \n", n);
	for(int j=1;j<=n;j++){
		printf("%d\t", fib(s));
		s++;
	}
	return 0;
}
