//Find out cube of a number which user enters.

#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	
	int i=1;
	
	while(i<=a){
		
		cout<<i<<"\t"<<i*i*i<<endl;
		i++;
	}
	return 0;
}
