#include<iostream>

using namespace std;

int main(){
	
	int size,index,pos;
	cout<<"Enter the size of array : ";
	cin>>size;
	
	int array[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" number : ";
			cin>>array[i];
		}
	
	cout<<"Which position of array do you want to print?"<<endl;
	cin>>pos;
	cout<<array[pos-1]<<endl;
	
	cout<<"Which index of array do you want to print?"<<endl;
	cin>>index;
	cout<<array[index];
	
return 0;
}
