#include<iostream>

using namespace std;

int main(){
	
	int n,rem,num=0;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int last[n];
	for(int i=0;i<n;i++){
		rem=array[i]%10;
		num=num*10+rem;
	}
	if(num%10==0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}
