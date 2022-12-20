//First program of array
//we will calculate total sales of a company and its average.

#include<iostream>

using namespace std;

int main(){
	
	int size,sum=0;
	cout<<"Enter number of months for which you need to calculate sales : ";
	cin>>size;
	
	int sale[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter the sales in "<<i+1<<" month : ";
			cin>>sale[i];
			sum+=sale[i];
		}
	cout<<"Total sale of the company is "<<sum<<endl;	
	cout<<"Average sale of comapny per month is : "<<sum/size;
	
return 0;
	
	
}
