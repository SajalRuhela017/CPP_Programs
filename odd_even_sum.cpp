//#include<iostream>
//
//using namespace std;
//
////This program is for sum of alternate integers while calculating a sum upto a particular number.
////First program is for odd integers and the other is for even integers.
//
//int main(){
//	
//	int num,sum=0;
//	cout<<"Enter any positive number : ";
//	cin>>num;
//	
//	for(int i=1;i<=num;i+=2){
//		sum=sum+i;
//	}
//	cout<<"The sum of all odd integers upto "<<num<<" is : "<<sum;
//	return 0;
//} 

#include<iostream>

using namespace std;

int main(){
	
	int num,sum=0;
	
	cout<<"Enter any number : ";
	cin>>num;
	if(num<0){
		cout<<"Please enter a positive value.";
		exit(0);
	}
	
	
	for(int i=0;i<=num;i+=2){
		
		sum=sum+i;
	}
	
	cout<<"The sum of even integers upto "<<num<<" is "<<sum;


	return 0;
}
