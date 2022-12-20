//Exercise Q.1 (Robert Lafore)

#include<iostream>

using namespace std;

struct phone{
	int area_code;
	int exchange;
	int number;
};

int main(){
	
	phone p1,p2;
	p1={212, 767, 8900};
	cout<<"Enter your area code : ";
	cin>>p2.area_code;
	cout<<"Enter exchange number : ";
	cin>>p2.exchange;
	cout<<"Enter number : ";
	cin>>p2.number;
	
	cout<<"My number is : ("<<p1.area_code<<")"<<p1.exchange<<"-"<<p1.number<<endl;
	cout<<"My number is : ("<<p2.area_code<<")"<<p2.exchange<<"-"<<p2.number;
}
