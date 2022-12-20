//Sajal_Write a program to find the area and perimeter of rectangle.

#include<stdio.h>

int main(){
	
	int a,b,area,peri;
	
	printf("Enter the measurement of length and breadth : ");
	scanf("%d %d", &a, &b);
	
	area=a*b;
	peri=2*(a+b);
	
	printf("The area of the Recatangle is : %d", area);
	printf("\nThe perimeter of the reactangle is : %d", peri);
}
