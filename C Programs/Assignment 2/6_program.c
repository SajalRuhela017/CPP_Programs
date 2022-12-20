//Sajal_Write a program to convert Fahrenheit temperature to Celsius.

#include<stdio.h>

int main(){
	
	float temp_f,temp_c;
	
	printf("Enter the value of temperature in degree Fahrenheit : ");
	scanf("%f", &temp_f);
	
	temp_c=(temp_f-32)*5/9;
	
	printf("The value of temperature in degree Celsius is : %f", temp_c);
	
	return 0;
}
