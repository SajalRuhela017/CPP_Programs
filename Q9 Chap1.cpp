#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,d,e,f;
	char x;
	
	cout<<"Enter first fraction \n";
	cin>>a>>x>>b;
	cout<<"Enter second fraction \n";
	cin>>c>>x>>d;
	e=(a*d + c*b);
	f=(b*d);
	cout<<"Sum of these two frations is :"<<e<<x<<f;
	return 0;
	
}
