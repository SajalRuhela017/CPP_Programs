#include<iostream>

using namespace std;

int main(){
	
	int num1,sum;
	cout<<"Enter any number : ";
	cin>>num1;
	if(num1%2==1){
		cout<<"Please enter a valid number.";
		exit(0);
	}
	for(int num2=1;num2<=num1;num1+=2){
		sum=sum+num2;
	}
	cout<<"The sum of odd integers less than num1 are : ";
	return 0;
}
