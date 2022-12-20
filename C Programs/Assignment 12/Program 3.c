//Sajal
//20238
//Problem 3
//Write a program to show the use of gets() and puts() function.

#include<stdio.h>

int main(){
	char name[100];
	printf("Enter your name : ");
	gets(name);
	printf("Your name is : ");
	puts(name);
	return 0;
}
