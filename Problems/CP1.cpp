//HACKERRANK PROBLEM 1
//
//Given two positive integers a and b (a<=b)
//
//OUTPUT FORMAT : For each integer n int the insclusive interval [a,b]
//
//If 1<=n<=9, then print the english representation of number. 
//If n>9 and even number then print even.
//If n>9 and odd number then print odd.


#include<iostream>

using namespace std;

int main (){
	
	int a,b,i;
	cout<<"Enter two numbers a and b : ";
	cin>>a>>b;
	
	 if (b==(a+1) or a==0){
	 	cout<<"Please enter the numbers as per the question.";
	 	exit(0);
	 }

	for (int i=a;i<=b;i++){
		if(i==1){
			cout<<"One"<<endl;
		}else if(i==2){
			cout<<"Two"<<endl;
		}else if(i==3){
			cout<<"Three"<<endl;
		}else if(i==4){
			cout<<"Four"<<endl;
		}else if(i==5){
			cout<<"Five"<<endl;
		}else if(i==6){
			cout<<"Six"<<endl;
		}else if(i==7){
			cout<<"Seven"<<endl;
		}else if(i==8){
			cout<<"Eight"<<endl;
		}else if(i==9){
			cout<<"Nine"<<endl;
		}else if(i>9 and i%2==0){
			cout<<"Even"<<endl;
		}else if(i>9 and i%2==1){
			cout<<"Odd"<<endl;
		}
	}
	return 0;
}
