//Sajal
//20238
//Program 4
//Write a program to implement simple calculator using function pointer.

#include<stdio.h>

void function(int a, int b, int op){
	
	switch(op){
		
		case 1 :
			printf("The sum is :\n%d+%d=%d", a, b, a+b);
			break;
			
		case 2 :
			printf("The difference is :\n%d-%d=%d", a, b, a-b);
			break;
			
		case 3 :
			printf("The product is :\n%d*%d=%d", a, b, a*b);
			break;
			
		case 4 : 
			printf("The quotient is :\n%d/%d=%d", a, b, a/b);
			break;
			
		case 5 :
			printf("The remainder is :\n%d%%d=%d", a,b,a%b);
			break;
			
		default :
			printf("Enter valid option.");
			break;
	}
}

int main(){
	int a,b,op;
	printf("Select the operation you want to perform :\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divsion\n5. Remainder\n");
	scanf("%d", &op);
	printf("Enter two numbers you want to operate -\n");
	scanf("%d %d", &a, &b);
	function(a, b, op);
	return 0;
}


