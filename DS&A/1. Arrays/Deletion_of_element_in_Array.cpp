//In this program we will delete an element from the defined array ande will reduce the size by 1.

#include<iostream>

using namespace std;

int main(){
	
	int size,pos;
	cout<<"Enter the size of the array : ";
	cin>>size;
	
	int arr[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" number : ";
			cin>>arr[i];
		}
	
	cout<<"The entered array is : "<<endl;
	
		for(int i=0;i<size;i++){
			cout<<"The "<<i+1<<" number is "<<arr[i]<<endl;
		}
		
	cout<<"Enter the index of element in your defined array which you want to delete : ";
	cin>>pos;
	

		
		for(int i=pos;i<=size;i++){
			arr[i]=arr[i+1];
		}
		
	cout<<"The array after the deletion of an element is"<<endl;
	
		for(int i=0;i<size-1;i++){
			cout<<"The "<<i+1<<" number is : "<<arr[i]<<endl;
		}
return 0;
}
