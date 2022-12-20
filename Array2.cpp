//User will enter an array.
//We will search for a value in array, if found we will return its index and position to user. 

#include<iostream>

using namespace std;

int main(){
	
	int size,num;
	cout<<"Enter the size of array you want to create : ";
	cin>>size;
	
	int array[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" value : ";
			cin>>array[i];
		}
		
	cout<<"Enter the number you want to check : ";
	cin>>num;
	
		for(int i=0;i<size;i++){
			
			if(num==array[i]){
				cout<<"The position of the number is "<<i+1<<"."<<endl;
				cout<<"The index of the number is "<<i<<"."<<endl;
				exit(0);
			}
			
		}
	
	cout<<"The entered value is not in array.";	
		
		
return 0;
}
