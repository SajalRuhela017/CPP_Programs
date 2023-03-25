//Square Root

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int t,i=1;
	cin>>t;
	int root[t];
	while(i<=t){
		int n;
		cin>>n;
		root[(i-1)]=sqrt(n);
		i++;
	}
	for(int j=0;j<t;j++){
		cout<<root[j]<<endl;
	}
	return 0;
}
