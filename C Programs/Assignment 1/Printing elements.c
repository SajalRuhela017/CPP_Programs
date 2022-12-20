//Sajal_Write a program to take one integer, one charcter and one float value from the user.

#include<stdio.h>

int main(){
	
	int i;
	char c;
	float f;
	
	printf("Enter any integer value, character value and float value : ");
	scanf("%d %c %f", &i, &c, &f);
	printf("You entered %d, %c, %f \n", i, c, f);	
	return 0;
}
