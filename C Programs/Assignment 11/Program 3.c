//Sajal
//20238
//Program 3
//Write a program to compare two numbers using pomters.

#include<stdio.h>

void compare(int *a, int *b){
	if(*a>*b){
		printf("%d is greater than %d.", *a, *b);
	}else if(*a==*b){
		printf("%d is equal to %d.", *a, *b);
	}else{
		printf("%d is less than %d.", *a, *b);
	}
}

int main(){
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);
	compare(&a,&b);
	return 0;
}
