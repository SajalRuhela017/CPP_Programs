//Sajal
//20238
//Program_5
//Write a program using function to find the even numbers in the series of 1 to n where n is input by user.

#include<stdio.h>

int even(int n){
	
	for(int i=1;i<=n;i++){
		if(i%2==0){
			printf("%d  ", i);
		}
	}
}

int main(){
	
	int n;
	printf("Enter value of n : ");
	scanf("%d", &n);
	even(n);
	return 0;
}
