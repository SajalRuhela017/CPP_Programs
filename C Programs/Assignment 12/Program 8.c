//Sajal
//20238
//Program 8
//Write a program to find the occurrence of particular letter in the string.

#include<stdio.h>
#include<string.h>

int main(){
	
	int count=0,x;
	char s[150];
	char l;
	printf("Enter any sentence : ");
	gets(s);
	x=strlen(s);
	printf("\nEnter the letter you want to find : ");
	scanf("%c", &l);
	for(int i=0;i<=x;i++){
		if(s[i]==l){
			count++;
		}
	}
	printf("The letter %c occurs %d times in the entered sentence.", l, count);
	return 0;
}
