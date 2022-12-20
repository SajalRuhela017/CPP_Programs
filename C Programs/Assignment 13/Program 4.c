//Sajal
//20238
//Program 4
//Write a program to read a line of text containing a series of words from the user using scanf().

#include<stdio.h>

int main(){
	
	char words[500];
	printf("Enter any line containing series of words : ");
	scanf("%[^\n]c\n", &words);
	puts(words);
	return 0;
}
