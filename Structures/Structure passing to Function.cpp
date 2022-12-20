//Structure passing to functions

#include<iostream>

using namespace std;

struct Brand{
	char name[50];
	int id;
	float sales;
};

int pass(Brand);

int main(){
	
	Brand B1,B2;
	cout<<"Enter the following details.\n";
	pass(B1);
	pass(B2);
	cout<<"The function is executed successfully. Congratulations!!";
	return 0;
}

int pass(Brand BB){
	cout<<endl<<"Enter name for brand : ";
	cin>>BB.name;
	cout<<endl<<"Enter id of brand : ";
	cin>>BB.id;
	cout<<endl<<"Enter sales of the brand : ";
	cin>>BB.sales;
}


