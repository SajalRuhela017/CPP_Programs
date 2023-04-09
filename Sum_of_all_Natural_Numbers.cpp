//Find the sum of the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n): 

#include<iostream>

using namespace std;

int main(){
	
	int num,sum=0;
	
	cout<<"Enter the number upto which you want the sum of all natural numbers : ";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			sum+=j;
		}
	}
	cout<<sum;
		
return 0;
}
