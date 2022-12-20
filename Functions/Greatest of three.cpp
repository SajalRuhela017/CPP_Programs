//Find greatest of three numbers using functions

#include<iostream>

using namespace std;

int NUM(int,int,int);

int main(){
	
	int a,b,c;
	cout<<"Enter three numbers to find out which is greatest - \n";
	cin>>a>>b>>c;
	NUM(a,b,c);
	return 0;
}

int NUM(int a,int b,int c){
	if(a>b){
		if(a>c){
			cout<<a<<" i.e. a is greatest.";
		}else{
			cout<<c<<" i.e. c is greatest.";
		}
	}else if(b>a){
		if(b>c){
			cout<<b<<" i.e. b is greatest.";
		}else{
			cout<<c<<" i.e. c is greatest.";
		}
	}else{
		cout<<c<<" i.e. c is greatest.";
	}
return 0;
}
