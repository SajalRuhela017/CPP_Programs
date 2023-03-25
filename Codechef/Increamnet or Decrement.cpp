//Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	(n%4==0) ? cout<<++n : cout<<--n;
	return 0;
}
