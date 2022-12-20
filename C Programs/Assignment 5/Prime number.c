//Sajal
//20238
//Problem 2

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num;
	printf("Enter any integer which you want to check is prime or not : ");
	scanf("%d", &num);
	
	for(int i=2;i<num;i++){
		if(num%i==0){
			printf("The number is not prime.");
			exit(0);
		}
	}
	printf("The number is prime.");
	return 0;
}
