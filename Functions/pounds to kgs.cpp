//Pounds to kgs uding functions

#include<iostream>

using namespace std;

float kgs(int);

int main(){
	
	int pounds,a=7;					
	int* p=&a;							//pointer undersatnding
	cout<<*p<<endl;						//  "	"	"	"
	cout<<&a<<endl;
	cout<<"Enter the weight in pounds : ";
	cin>>pounds;
	cout<<endl<<"The value in kgs will be : "<<kgs(pounds);
	return 0;
}

float kgs(int pounds){
	cout<<"Function is now being called.";
	return (pounds*0.453);
}
