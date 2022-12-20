#include<iostream>

//This program is for calculating sum of numbers upto a particular number.

using namespace std;

int main(){
	
	int num,sum=0;
	cout<<"Enter any number upto which you want the sum : ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	cout<<"The sum of numbers upto "<<num<<" is "<<sum<<".";
	return 0;
}
