//Sajal
//20238
//Program_4
//Write a program to find wether a number is prime or not using functions.

#include<stdio.h>

int NUM(int a){
	int count=0;
	for(int i=2;i<a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==0)
		printf("The number %d is prime.", a);
	else
		printf("The number %d is not prime.", a);
}

int main(){
	
	int a;
	printf("Enter any number which you want to check whether it is prime or not : ");
	scanf("%d", &a);
	NUM(a);
	return 0;
}
