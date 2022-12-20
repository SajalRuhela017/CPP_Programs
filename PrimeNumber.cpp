//This program is made to print prime numbers.

#include<iostream>

using namespace std;

int main(){
	
	int a,b;
	cout<<"Please enter a number : ";
	cin>>a;
	b=a/2;
	for(int i=2;i<=b;i++){
	
		
		if(a%i==0){
			
			cout<<"The number "<<a<<" is not prime.";
			exit(0);
		}
		
}

	
		cout<<"The number "<<a<<" is Prime.";

	return 0;
}
	//After exit(0) is encountered by the compiler.
	//exit(0) is pre-defined which is used to come out of whole program.

