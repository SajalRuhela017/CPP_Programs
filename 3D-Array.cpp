//Here we will make a 3D array.

#include<iostream>

using namespace std;

const int one = 3;
const int two = 4;
const int three = 3;

int main(){
	
	double check[one][two][three];
	
	cout<<"Enter the values of elements in array.\n";
	
	for(int i=0;i<one;i++){
		for(int j=0;j<two;j++){
			for(int k=0;k<three;k++){
				cout<<"\nEnter the value of "<<i<<" array of "<<j<<" arrays of "<<k<<" arrays : ";
				cin>>check[i][j][k];
			}
		}
	}
}

