//Sajal
//20238
//Program_2
//Write a program to implement simple calculator using functions.

#include<stdio.h>

int ADD(int, int);
int PRO(int, int);
int SUB(int, int);
int QUO(int, int);

int main(){
	
	int sel,a,b;
	printf("*********Simple Calculator*********\n");
	printf("Select any of the operation you want to perform -\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division \n5. Exit\n");
	scanf("%d", &sel);
	switch(sel){
		
		case 1 :
			printf("Enter two numbers you want to add-\n");
			scanf("%d %d", &a, &b);
			ADD(a,b);
			break;
			
		case 2 :
			printf("Enter two numbers you want to subtract-\n");
			scanf("%d %d", &a, &b);
			SUB(a,b);
			break;
			
		case 3 :
			printf("Enter two numbers you wnat to multiply-\n");
			scanf("%d %d", &a, &b);
			PRO(a,b);
			break;
			
		case 4 : 
			printf("Enter two numbers you want to divide-\n");
			scanf("%d %d", &a, &b);
			QUO(a,b);
			break;
		
		case 5 :
			printf("THANK YOU!!!");
			break;
			
		default :
			printf("Please enter any valid option.");
	}
	printf("\nTHANK YOU!!!");
	return 0;
}

int ADD(int a, int b){
	printf("The sum of these numbers is : %d", a+b);
}

int SUB(int a, int b){
	printf("The difference of these numbers is : %d", a-b);
}

int PRO(int a, int b){
	printf("The product of these numbers is : %d", a*b);
}

int QUO(int a, int b){
	printf("The quotient of these numbers is : %d", a/b);
}
