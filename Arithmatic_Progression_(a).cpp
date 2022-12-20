//Sum of Arithmatic Progression.
//User will enter first term of A.P., common difference of A.P. and last term,l upto which sum of A.P. is to be calculated.

#include<iostream>

using namespace std;

int main(){
	
	int a,l,d,sum=0;
	
	cout<<"This program is made to calculate sum of A.P."<<endl;
	cout<<"Enter the first number, a : ";
	cin>>a;
	cout<<"Enter the comman differnce, d : ";
	cin>>d;
	cout<<"Enter the last term upto which you want to calculate, l : ";
	cin>>l;
	
		for(int i=a;i<=l;i=i+d){
			
			sum+=i;
			
		}
		
	cout<<"Sum of this A.P. is "<<sum<<endl;
	
return 0;
} 
