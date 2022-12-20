//User will define an array.
//Ask user which variable is to be changed.
//If possible change the variable and print the new array.

#include<iostream>

using namespace std;

int main(){
	
	int size,n;
	cout<<"Enter the size of array you want to create : ";
	cin>>size;
	int arr[size];
	
		for(int i=0;i<size;i++){
			
			cout<<"Enter "<<i+1<<" number : ";
			cin>>arr[i];
			cout<<endl;
		}
		
	cout<<"Enter the index of the array variable you want to change : ";
	cin>>n;
	cout<<"Enter the new number with which you want to change the old number : ";
	cin>>arr[n];
	
		for(int i=0;i<size;i++){
		
			cout<<arr[i];
			cout<<endl;
		}
	
return 0;
	
}
