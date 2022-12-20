//We will find quadratic roots by implementing functions

#include<iostream>
#include<cmath>

using namespace std;

int quad(int,int,int,int);
int star();

int main(){
	char s;
	do{
	int a,b,c,D;
	cout<<"Enter the coefficients of the quadratic equation of which you want to calculate roots -\n";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	quad(D,a,b,c);
	star();
	cout<<"\nDo you want to calculate roots for other quadratic equation? Type 'y' to proceed and 'n' to exit.";
	cin>>s;
	}while(s=='y' || s=='Y');
	cout<<"Thank You!!!";
	return 0;
}

int quad(int D,int a,int b,int c){
	
	float r1,r2;
	if(D>0){
		r1=-b+sqrt(D)/2*a;
		r2=-b-sqrt(D)/2*a;
		cout<<"The roots of the equation are real and unequal and thier values are : "<<r1<<" and "<<r2<<".\n";
	}else if(D==0){
		r1=-b/2*a;
		r2=-b/2*a;
		cout<<"The roots of the equation are real and equal and its value is : "<<r1<<".\n";
	}else{
		cout<<"The roots are imaginary as the discriminant is neagtive.\n";
	}
	return(0);
}

int star(){
	for(int i=1;i<=15;i++){
		for(int j=1;j<=i;j++){
		cout<<"*";
		}
	}
	return 0;
}
