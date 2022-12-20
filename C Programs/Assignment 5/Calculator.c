//Menu Driven Calculator

#include<stdio.h>

int main(){
	
	int choice,a,b,ans;
	printf("*****This a Menu Driven Calculator*****\nSelect the appropriate option-\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	scanf("%d", &choice);
	
	switch(choice){
		
		case 1 :
			printf("Enter the value of two numbers you want to add -\n");
			scanf("%d %d", &a, &b);
			ans=a+b;
			printf("\nThe sum of these two numbers is : %d", ans);
			break;
			
		case 2 :
			printf("Enter the value two numbers you want to subtract -\n");
			scanf("%d %d", &a, &b);
			ans=a-b;
			printf("\nThe difference of these two numbers is : %d", ans);
			break;
			
		case 3 :
			printf("Enter the value of two numbers you want to multiply -\n");
			scanf("%d %d", &a, &b);
			ans=a*b;
			printf("\nThe product of these two numbers is : %d", ans);
			break;
			
		case 4 :
			printf("Enter the value of two numbers you want to divide -\n");
			scanf("%d %d", &a, &b);
			ans=a/b;
			printf("\nThe quotient of these two numbers is : %d", ans);
			break;
			
		default :
			printf("\nNot a VALID input!!!");
			break;
	}
	return 0;
}
