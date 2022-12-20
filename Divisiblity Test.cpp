#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"Enter a number :";
	cin>>a;
	if(a%3==0){
		if(a%6==0){
			cout<<"The number is divisible with both 3 and 6.";
		}else{
			cout<<"The number is divisible only by 3.";
		}
	}
	else if (a%3==1) {
		cout<<"The number is not divisible by 3 and the remainder is 1.";
	}else {
		cout<<"The number is not divisible by 3 and the remainder is 2.";
	}
	return 0;
}

