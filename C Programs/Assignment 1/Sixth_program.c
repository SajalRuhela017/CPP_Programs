//Sajal_Write a program to find the area and circumference of circle.

#include<stdio.h>

int main(){
	
	int r;
	float pi=3.142,area,circ;
	
	printf("Enter the radius of the Circle : ");
	scanf("%d", &r);
	
	area=pi*r*r;
	circ=2*pi*r;
	
	printf("The area of the circle is : %f", area);
	printf("\nThe circumference of the circle is : %f", circ);
	return 0;
	}
