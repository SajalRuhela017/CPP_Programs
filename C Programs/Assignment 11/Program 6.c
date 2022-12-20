//Sajal
//20238
//Program 6
//Write a program to find the factorial of a number using pointer.

#include<stdio.h>

void fact(int,int *);

int main(){
	int n,factorial;
	printf("Enter any number : ");
	scanf("%d", &n);
	fact(n,&factorial);
	printf("Factorial is %d is : %d", n, factorial);
	return 0;
}

void fact(int n, int *f){
	*f=1;
	for(int i=1;i<=n;i++){
		*f*=i;
	}
}
