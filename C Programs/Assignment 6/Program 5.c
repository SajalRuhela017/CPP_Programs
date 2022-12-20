/*Sajal
20238
Program 5
Write a program in to dispaly this pattern like right angled triangle using alphabets
A
BB
CCC
DDDD
EEEEE	*/

#include<stdio.h>

int main(){
	
	char a='A';
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%c", a);
		}
		a++;
		printf("\n");
	}
	return 0;
}
