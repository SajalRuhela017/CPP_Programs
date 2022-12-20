//Sajal_Write a program that takes hours and minutes as input, and calculates the total number of minutes.

#include<stdio.h>

int main(){
	
	int h, m, total;
	
	printf("Enter the value of hours and minutes : ");
	scanf("%d %d", &h, &m);
	
	total=(h*60)+m;
	
	printf("Total number of minutes are : %d", total);
	
	return 0;
}
