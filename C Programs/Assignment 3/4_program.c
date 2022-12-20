/*Sajal_20238_Prolem 4
Write a program to find the value of v,the final velocity
v^2 =u^2 -2*a*s
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	int u,a,s;
	float v;
	
	printf("Enter the value of initial velocity : ");
	scanf("%d", &u);
	printf("Enter the value of acceleration : ");
	scanf("%d", &a);
	printf("Enter the value of displacement : ");
	scanf("%d", &s);
	
	v = sqrt(u*u - 2*a*s);
	
	printf("The value of final velocity : %f", v);
	
	return 0;
	
}
