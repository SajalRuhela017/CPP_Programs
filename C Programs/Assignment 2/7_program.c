//Sajal_Write a program to find the third angle of a triangle if two angles are given.

#include<stdio.h>

int main(){
	
	float a,b,c;
	
	printf("Enter the values of two angles of a triangle : ");
	scanf("%f %f", &a, &b);
	
	c=180-(a+b);
	
	printf("The value of thir angle of the triangle is : %f", c);
	
	return 0;
}
