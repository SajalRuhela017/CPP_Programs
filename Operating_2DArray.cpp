//Here we will operate two 2D arrays. We will add, subtract, transpose and multiply the array elements.

#include<iostream>

using namespace std;

int main(){
	
	int n,m,choice;
	
	cout<<"Enter the value of order for 2D array."<<endl;
	cin>>n>>m;
	int A[n][m];
	
	cout<<"\nEnter the value of elements for the first array.\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<"Enter the element for ["<<i<<"]["<<j<<"] index : ";
				cin>>A[i][j];
			}
		}
		
	int B[n][m];
	
	cout<<"\nEnter the value of elemnts for the second array.\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<"Enter the element for ["<<i<<"]["<<j<<"] index : ";
				cin>>B[i][j];
			}
		}
		
	cout<<"\nEnter the operation you want to perform on the two entered arrays.\n1. Addition\n2. Subtraction\n3. Transpose\n4. Multiply"<<endl;
	cin>>choice;
	
		switch(choice) {
			
			case 1 : 
				cout<<"You have chosen to add both the arrays.\nSo, the sum of both the arrays is : "<<endl;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						cout<<A[i][j]+B[i][j]<<"\t";	
					}
				cout<<endl;
				}
			break;
			
			case 2 :
				cout<<"You have chosen to subtract both the arrays.\nSo, the difference of both the arrays is : "<<endl;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						cout<<A[i][j]-B[i][j]<<"\t";
					}
				cout<<endl;
				}
			break;
			
			case 3 : 
				cout<<"You have chosen to transpose the arrys.\n";
				cout<<"The transpose of array 1 is : \n";
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						cout<<A[j][i]<<"\t";
					}
				cout<<endl;	
				}
				cout<<endl;
				cout<<"The transpose of array 2 is : \n";
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						cout<<B[j][i]<<"\t";
					}
				cout<<endl;
				}
			break;
			
			case 4 :
				cout<<"You have chosen to multiply the arrays.\nSo, the product of respective elements of arrays is : "<<endl;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						cout<<A[i][j]*B[i][j]<<"\t";
					}
				cout<<endl;
				}
			break;	
			
			default : 
				cout<<"You entered a wrong option. Try again.";		
		}
			
return 0;	
}
