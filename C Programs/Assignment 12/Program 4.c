//Sajal
//20238
//Program 4
//Write a program to use the scanf( ) for accepting multi word strings. 

#include<stdio.h>

int main(){
	char sentence[200];
	printf("Enter any sentence : ");
	scanf("%[^\n]s", &sentence);
	printf("The sentence is : %s", sentence);
	return 0;
}
