//Sum of Harmonic Series.

#include<iostream>

using namespace std;

int main(){
	
	float a,l,d,sum=0;
	
	cout<<"Enter the details of A.P. whose H.P. you want to make."<<endl;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the last number : ";
	cin>>l;
	cout<<"Enter the common difference : ";
	cin>>d;
	
		for(float i=a;i<=l;i+d){
			sum+=(1/(float)i);
		}
	cout<<sum;
		
return 0;
}
