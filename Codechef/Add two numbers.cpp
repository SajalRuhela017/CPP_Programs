//Add two sum

#include<iostream>

using namespace std;

int main(){
	
	int t,a,b,i=1;
	cin>>t;
	int sum[t];
	while(i<=t){
		cin>>a>>b;
		sum[(i-1)]=a+b;
		i++;
	}
	for(int j=0;j<t;j++){
		cout<<sum[j]<<endl;
	}
	return 0;
}
