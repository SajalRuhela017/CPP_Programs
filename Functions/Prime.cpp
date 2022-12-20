//Prime numbers using functions

#include<iostream>

using namespace std;

int star();
int prime(int);
int main(){
	
	char c;
	cout<<"This program is made for checking an integer is prime or not.\n";
	star();
	do{
	int num;
	cout<<"\nEnter the number : ";
	cin>>num;
	prime(num);
	star();
	cout<<"\n\nDo you want to check fpr another number? Type 'y' to proceed and 'n' to exit.\n";
	cin>>c;
	}while(c=='y' || c=='Y');
	cout<<"\nThank you!!!";
	return 0;
}

int star(){
	for(int i=1;i<65;i++){
		cout<<"*";
	}
	return 0;
}

int prime(int num){
	int count=0;
	for(int i=2;i<num;i++){
		if(num%i==0){
			count++;
		}
	}if(count>0){
		cout<<"The number "<<num<<" is not prime.\n";
	}else {
		cout<<"The number "<<num<<" is prime.\n";
	}
	return 0;
}
