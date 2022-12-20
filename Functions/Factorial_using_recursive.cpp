//Factorial using recursion function

#include<iostream>

using namespace std;

int fact(int);

int main(){
	
	int n,value;
	cout<<"Enter any number to calculate factorial : ";
	cin>>n;
	value=fact(n);
	cout<<"The value of "<<n<<"! is : "<<value;
	return 0;
}

int fact(int n){
	if(n>1){
		return n*fact(n-1);
	}else if(n==1){
		return 1;
	}
}
