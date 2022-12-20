//Find the max and min number in an array.

#include<iostream>

using namespace std;

int main(){
	
	int size,max,min;
	cout<<"Enter the size of the array : ";
	cin>>size;
	
	int array[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter the "<<i+1<<" number.";
			cin>>array[i];
		}
		
	max=array[0];
	min=array[0];
	
		for(int i=0;i<size;i++){
			
			if(max<array[i]){
				max=array[i];
			}
			if(min>array[i]){
				min=array[i];
			} 
		}

		
	cout<<"Here the maximum number is "<<max<<"."<<endl;
	cout<<"Here the minimun number is "<<min<<".";
return 0;		
}
