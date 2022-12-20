#include<iostream>

using namespace std;

int main(){
//	The year is a leap year if it divisible by 4 and not divisible by 100 or
//	The year is divisible by 400.
	int a;
	cout<<"Enter the year :";
	cin>>a;
	if(a%400==0){
		cout<<"The year is a leap year";
	}else if(a%100!=0){
		if (a%4==0){
			cout<<"The year is a leap year.";
		}else{
			cout<<"The year is not a leap year.";
		}
	}else{
		cout<<"The year is not a leap year.";
	}
	return 0;
}
