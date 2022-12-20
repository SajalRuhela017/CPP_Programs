//Sajal_Write a program to take an integer and convert it into kilometers and meters.

#include<stdio.h>

int main(){
	
	float a,meters,kilo;
	
	printf("Enter any value in centimeters : ");
	scanf("%f", &a);
	
	meters=a/100;
	kilo=a/1000;
	
	printf("The value in meters is : %f", meters);
	printf("\nThe value in kilometers is : %f", kilo);
	
	return 0;
}
