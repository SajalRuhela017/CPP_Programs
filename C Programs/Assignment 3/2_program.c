/*Sajal_20238_Problem 2
Write a program to evaluate following expressions
i. a -(((b / c) * d) + e)) * (f +g)
ii. ++b / c + a * d++
*/

#include<stdio.h>

int main(){
	
	int a,b,c,d,e,f,g;
	float p,i,ii;
	
	printf("Enter the values of 7 integers : ");
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
	
	p = b/c;
	i = a - (((p)*d)+e)*(f + g);
	ii = ++b/c + a*d++;
	
	printf("%f", i);
	printf("\n%f", ii);
	
	return 0;
}
