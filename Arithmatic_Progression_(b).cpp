//Sum of Arithmatic Progression.
//User will enter first term of A.P., common difference of A.P. and number of terms upto which sum of A.P. is to be calculated.

#include<iostream>

using namespace std;

int main(){
	
	int a,d,n,sum=0;
	
	cout<<"This program is made to calculate sum of A.P."<<endl;
	cout<<"Enter the first term, a : ";
	cin>>a;
	cout<<"Enter the common difference, d : ";
	cin>>d;
	cout<<"Enter the number of terms upto which you want the sum, n : ";
	cin>>n;
	
	int i=1;
	
		do{
			sum=sum+a+(i-1)*d;	
			i++;
			
		}while(i<=n);
	
	cout<<"The sum of this A.P. upto "<<n<<" terms is "<<sum;
	
return 0;
	
}
