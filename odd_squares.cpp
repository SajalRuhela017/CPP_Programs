//Sum of squares of numbers upto a particular number

#include<iostream>


using namespace std;

int main(){
	
	int num,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++){
		sum+=(i*i);
    }
	cout<<"The sum of the squares of numbers upto "<<num<<" is "<<sum<<" .";
return 0;
}

