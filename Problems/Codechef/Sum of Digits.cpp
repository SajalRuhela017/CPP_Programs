//Sum of Digits

#include<iostream>

using namespace std;

int main(){
	
	int t,n,i=1,rem;
	cin>>t;
	int sum[t];
	for(int j=0;j<t;j++){
		sum[j]=0;
	}
	while(i<=t){
		cin>>n;
		while(n>0){
			rem=n%10;
			sum[(i-1)]+=rem;
			n/=10;
		}
		i++;
	}
	for(int j=0;j<t;j++){
		cout<<sum[j]<<endl;
	}
}
