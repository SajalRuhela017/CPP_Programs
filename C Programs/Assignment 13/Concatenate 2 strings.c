//Sajal
//20238
//Program 1
//Write a program to concatenate two strings.

#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[500],s2[500];
	printf("Enter the first string : ");
	gets(s1);
	printf("Enter the second string : ");
	gets(s2);
	strcat(s1,s2);
	printf("The concatenated string is : ");
	puts(s1);
	return 0;
}
