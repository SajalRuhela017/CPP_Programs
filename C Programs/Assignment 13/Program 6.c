//Sajal
//20238
//Program 6
//Write a program to implement strrey(), strlwr() and strupr() functions.

#include<stdio.h>
#include<string.h>

int main(){
	
	char string[1000];
	int x;
	printf("Enter string : ");
	gets(string);
	x=strlen(string);
	char rev[x];
	for(int i=0;i<x;i++){
		rev[i]=string[i];
	}
	printf("\nThe entered string is : %s\n", string);
	printf("\nThe reverse of the string is : %s\n", strrev(rev));
	printf("\nThe lower cased string is : %s\n", strlwr(string));
	printf("\nThe upper case string is : %s\n", strupr(string));
	return 0;
}
