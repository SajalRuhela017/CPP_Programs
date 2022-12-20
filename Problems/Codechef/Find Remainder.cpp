//Find Remainder

#include<iostream>

using namespace std;

int main(){
	
	int t,a,b,i=1;
	cin>>t;
	int rem[t];
	while(i<=t){
		cin>>a>>b;
		rem[(i-1)]=a%b;
		i++;
	}
	for(int j=0;j<t;j++){
		cout<<rem[j]<<endl;
	}
	return 0;
}
