//Sajal
//20238
//Write a program to print all even numbers from 1 to n, where n is input by the user

#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the value of n upto which you want to print even numbers : ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			printf("%d\n", i);
		}
	}
	return 0;
}
