//Insertion before given index

#include<iostream>

using namespace std;

int main(){
	
	int tile[30];
	int n,index;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter elements of array -"<<endl;
	for(int i=0;i<n;i++){
		cin>>tile[i];
	}
	cout<<"Enter the index before which you want to insert element : ";
	cin>>index;
	for(int i=n;i>=(index);i--){
		tile[i]=tile[i-1];
	}
	n++;
	cout<<"Enter the value of element at desired index : ";
	cin>>tile[index-1];
	for(int j=0;j<n;j++){
		cout<<tile[j]<<endl;
	}
	return 0;
}
