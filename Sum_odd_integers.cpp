#include<iostream>

using namespace std;

int main(){
	
	int num1,sum=0;
	cout<<"Enter any number : ";
	cin>>num1;
	if(num1%2==0){
		cout<<"Please enter a valid number.";
		exit(0);
	}
	for(int i=1;i<=num1;i+=2){
		sum=sum+i;
	}
	cout<<"The sum of odd integers less than num1 are : "<<sum;
	return 0;
}
