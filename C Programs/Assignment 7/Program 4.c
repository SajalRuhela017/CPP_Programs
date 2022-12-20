//Sajal
//20238
//Write a program to display squares of numbers upto n, which is entered y the user.

#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the value of n upto which you want to print squares of numbers : ");
	scanf("%d", &n);
	printf("1");
	for(int i=2;i<=n;i++){
		printf(" %d", i*i);
	}
	return 0;
}
