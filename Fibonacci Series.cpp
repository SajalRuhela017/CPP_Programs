//Fibonacci Series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144............

#include<iostream>

using namespace std;
int series(int,int,int,int);
int main(){
	
	int a=0,b=1,x,num;
	cout<<"Enter the number of terms upto which you want the Fibonacci Series : ";
	cin>>num;
	cout<<a<<"+"<<b;
	series(num,a,b,x);
	return 0;
}

int series(int num,int a,int b,int x){
	for(int i=2;i<=num;i++){
		x=a+b;
		cout<<"+"<<x;
		a=b;
		b=x;
	}
}
