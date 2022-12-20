//Modification of array

#include<iostream>

using namespace std;

int main(){
	
	int a,size,ind,num;
	
	cout<<"Enter the size of the array : ";
	cin>>a;
	
	size=a+1;
	int array[size];
	
	for(int i=0;i<a;i++){
		cout<<"\nEnter the value of "<<i+1<<" element : ";
		cin>>array[i];
	}
	
	cout<<"\nEnter the index of the element which you want to change : ";
	cin>>ind;
	
	for(int i=a;i>ind;i--){
		array[i]=array[i-1];
	}
	
	cout<<"\nEnter the value of element on index "<<ind<<" : "<<endl;
	cin>>num;
	cout<<endl<<endl;
	
	array[ind]=num;
	
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}
	
	return 0;
}
