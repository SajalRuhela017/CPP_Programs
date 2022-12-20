//In this program we will find roots of a quadratic equation entered by user.

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	float a,b,c,x1,x2,D,R,I;
	char choice;
	
	do{
	
		cout<<"Enter the coefficients of the quadratic equation : ";
		cin>>a>>b>>c;
		D = b*b -4*a*c;
		
		if(a==0){
			cout<<"Enter correct values.";
			break;
		}
		
			if(D>0){
				
				x1 = (-b + sqrt(D)) / (2*a);
				x2 = (-b - sqrt(D)) / (2*a);
				cout<<"The roots of the quadratic equation are real and unequal."<<endl;
				cout<<"The roots are : "<<x1<<" and "<<x2<<"."<<endl;
				
			}else if(D==0){
				
				x1 = -b/(2*a);
				cout<<"The roots of the quadratic equation are real and equal."<<endl;
				cout<<"The root is : "<<x1<<endl;
				
			}else{
				
				R = -b/(2*a);
				I = sqrt(-D)/(2*a);
				cout<<"The roots of the equation are imaginary beacause it's discriminant is negative."<<endl;
				cout<<"The roots are : "<<R<<" + "<<I<<"i and "<<R<<" - "<<I<<"i."<<endl;		
			}
			
			cout<<"Do you want to check for another quadratic equation? Type 'y' to proceed and 'n' to exit."<<endl;
			cin>>choice;
			
	}while(choice=='y' || choice=='Y');
	
	cout<<"Thank You!";
	
return 0;	
}
	
