//Here we will print a number triangle.

#include<iostream>

using namespace std;

int fun(int);
int main(){
	
	int num;
	cout<<"Enter any number upto which you want to print the triangle : ";
	cin>>num;
	fun(num);
	
	return 0;
}

int fun(int num){
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
