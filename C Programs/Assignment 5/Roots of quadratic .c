//Roots of Quadratic equation

#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,c,D;
	float r1,r2;
	
	printf("Enter the coefficients of the quadratic equation -\n");
	scanf("%d %d %d",&a, &b, &c);
	D=b*b-4*a*c;
	
	if(D>0){
		r1=(-b+sqrt(D))/2*a;
		r2=(-b-sqrt(D))/2*a;
		printf("\nThe roots of the equation are : %f\t%f", r1,r2);
	}else if(D==0){
		r1=-b/2*a;
		r2=-b/2*a;
		printf("\nThe roots of the equation are : %f\t%f", r1,r2);
	}else{
		printf("\nThe equation has no real roots.");
	}
	return 0;
}
