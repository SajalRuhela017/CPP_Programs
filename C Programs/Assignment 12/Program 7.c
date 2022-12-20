//Sajal
//20238
//Program 7
//Write a program to find the length of string without using library function

#include<stdio.h>

int main(){
	
	int length=0;
	char string[200];
	printf("Enter the string : ");
	gets(string);
	for(int i=0;string[i];i++){
		length++;
	}
	printf("The length of the string is : %d", length);
	return 0;
}
