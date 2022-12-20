//Sajal
//20238
//Program 2
//Write a program to compare two strings.

#include<stdio.h>
#include<string.h>

int main(){
	
	int result;
	char s1[500], s2[500];
	printf("Enter first string : ");
	gets(s1);
	printf("Enter second string : ");
	gets(s2);
	result=strcmp(s1,s2);
	printf("The result of comparing two strings is : %d", result);
	return 0;
}
