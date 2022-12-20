//Here we will calculate factorial of a number.

#include<iostream>

using namespace std;

int main(){
	
	int n;
	double fact=1;
	
	cout<<"Enter any number of which you want to calculate factorial : ";
	cin>>n;
		for(int i=1;i<=n;i++){
			fact*=i;
		}
	
	cout<<"The factorial of the number "<<n<<" is : "<<fact;
	
	return 0;
}
