//Here we will find the product of the digits of a number entered by user. 
//eg. 434---------->4x3x4=36.

#include<iostream>

using namespace std;

int main(){
	
	int num,i,new_num=1,rem;
	cout<<"Here we will find the product of the digits of the number entered.\n";
	cout<<"Enter the number : ";
	cin>>num;
	
	i=num;
	
		while(i!=0){
			rem=i%10;
			new_num*=rem;
			i/=10;
		}
		
		if(new_num==0){
			cout<<"The product of the number is 0 because there is zero digit in the entered number.";
		}
		else{
			cout<<"The products of all the digits of the number "<<num<<" is : "<<new_num<<endl;
		}
	
return 0;
}
