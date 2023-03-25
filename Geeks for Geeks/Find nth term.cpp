//Find the nth term of series 1,3,6,10,15,21..........

#include<iostream>

using namespace std;

int main(){
	
	int a=1,d=2,n;
	cin>>n;
	for(int i=1;i<n;i++){
		a+=d;
		d++;
	}
	cout<<a;
	return 0;
}
