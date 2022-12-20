//Addition of respective elements of two arrays.

#include<iostream>

using namespace std;

int main(){
	
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	
	int A[size];
	int B[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter the "<<i+1<<" number for Array A : ";
			cin>>A[i];
		}
		
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" number for Array B : ";
			cin>>B[i];
		}
		
		for(int i=0;i<size;i++){
			int sum=0;
			sum=A[i]+B[i]+sum;
			cout<<"The sum of elements of index "<<i<<" in both arrays is : "<<sum<<endl;
		}
		
//	cout<<"The sum of respective elements in array A and B is "<<sum;
	
return 0;
}


