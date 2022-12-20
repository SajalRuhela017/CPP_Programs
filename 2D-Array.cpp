// Here we will create a 2D array.

#include<iostream>

using namespace std;

const int months = 3;
const int districts = 5;

int main(){
	
	int sales[months][districts];
	
	cout<<"Enter the values of sales of the respective districts.\n\n";
	
		for(int i=0;i<districts;i++){
			
			for(int j=0;j<months;j++){
				
				cout<<"\nEnter the sales value in "<<i+1<<" districts for "<<j+1<<" month : ";
				cout<<endl;
				cin>>sales[i][j];
			}
		}
		
return 0;
}
