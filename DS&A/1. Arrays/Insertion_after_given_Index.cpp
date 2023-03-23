//Insertion after the given index

#include<iostream>

using namespace std;

int main(){
	
	int tile[25];
	int n,index;
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the elements of the array -"<<endl;
	for(int i=0;i<n;i++){
		cin>>tile[i];
	}
	cout<<"Enter the index after which you want to insert element : ";
	cin>>index;
	for(int i=n;i>index+1;i--){
		tile[i]=tile[i-1];
	}
	n++;
	cout<<endl<<"Enter the value at desired index : ";
	cin>>tile[(index+1)];
	for(int j=0;j<n;j++){
		cout<<tile[j]<<endl;
	}
	return 0;
}
