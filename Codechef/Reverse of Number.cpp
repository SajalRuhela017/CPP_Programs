//Reverse of Number

#include <iostream>
using namespace std;

int main(){
	
	int t,i=1;
	cin>>t;
	int rev[t];
	while(i<=t){
		int n,rem,new_num=0;
	    cin>>n;
	    while(n>0){
	        rem=n%10;
	        new_num=rem+new_num*10;
	        n/=10;
	    }
	    rev[(i-1)]=new_num;
	    i++;
	}
	for(int j=0;j<t;j++){
	    cout<<rev[j]<<endl;
	}
	return 0;
}

