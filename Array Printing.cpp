//Here we will print numbers enetred in array.

#include<iostream>

using namespace std;

int main(){
	
	int size;
	
	cout<<"Enter the size of array : ";
	cin>>size;
	
	int array[size];
	
		for(int i=0;i<size;i++){
			
			cout<<"Enter "<<i+1<<" number :";
			cin>>array[i];
			
		}
		
	cout<<"Array Index\t\tPosition\tArray Value"<<endl;
	
		for(int i=0;i<size;i++){
			
			cout<<"array["<<i<<"]\t\t"<<i+1<<"\t\t"<<array[i]<<endl;
		}
		
return 0;
	
}


