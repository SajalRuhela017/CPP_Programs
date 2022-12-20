//Here we will print the exponent numbers.

#include<iostream>

using namespace std;

int main(){
	
	int base,base_new=1,exponent;
	char dummychar;
	
	
	
	cout<<"Please enter base, raise to symbol and exponential power:"<<endl;
	cin>>base>>dummychar>>exponent;
	

		for(int i=1;i<=exponent;i++){
			
			base_new*=base;
		}
		
	cout<<base_new<<endl;
	

	
	return 0;
}
