//Array Traversal and Insertion

#include<iostream>

using namespace std;

int main(){
	
	int array[20];
	int n,x,index;
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<endl<<"Enter array elements -"<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<endl<<"Enter the index at which variable is to be inserted : ";
	cin>>index;
	cout<<endl<<"Enter the value of the element : ";
	cin>>x;
	for(int i=n;i>index;i--){
		array[i]=array[i-1];
	}
	n++;
	array[index]=x;
	for(int j=0;j<n;j++){
		cout<<array[j]<<endl;
	}
	return 0;
}
