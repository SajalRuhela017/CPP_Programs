#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string name;
	string answer1;
	string answer2;
	string answer3;
	int a,b;
	
	cout<<"Enter your name please!\n";
	cin>> name;
	cout<<"Hello "<<name<<". How are you?\n";
	cin>> answer1;
	cout<<"Okay. How may I help you?\n";
	cin>> answer2;
	cout<<"Yes why not. Enter your numbers.\n";
	cin>>a;
	cin>>b;
	cout<<"Okay. Here's your answer! \n"<<a+b<<". \n";
	cout<<"Anything Else? \n";
	cin>> answer3;
	cout<<"Thank You! Please come again.";

	
	return 0;	
}
