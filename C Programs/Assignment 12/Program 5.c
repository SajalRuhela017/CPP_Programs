//Sajal
//20238
//Program 5
//Write a program to print alphabet set a to z and A to Z in decimal and character form-

#include<stdio.h>

int main(){
	
	char small,capital;
	small='a';
	capital='A';
		for(int i=1;i<=26;i++){
			printf("The decimal value of %c is %d\n", capital, capital);
			capital++;
		}
		for(int i=1;i<=26;i++){
			printf("The decimal value of %c is %d\n", small, small);
			small++;
		}
	return 0;
}
