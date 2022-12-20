//Sajal_Write a program that takes minutes as input, and display the total number of hours and minutes.

#include<stdio.h>

int main(){
	
	int a;
	float h,m;
	
	printf("Enter total numbers of minutes : ");
	scanf("%d", &a);
	
	h=a/60;
	m=a%60;
	
	printf("The total number of hours are : %f", h);
	printf("\nThe total number of minutes are : %f ", m);
	
	return 0;
}
