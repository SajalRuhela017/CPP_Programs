//Small Factorials

#include <iostream>
using namespace std;

int main(){
	
	int t,i=1,n;
	cin>>t;
	long long int fact[t];
	for(int j=0;j<t;j++){
	    fact[j]=1;
	}
	while(i<=t){
	    cin>>n;
	    if(n==0){
	        fact[(i-1)]=1;
	    }else{
	        for(int j=1;j<=n;j++){
	        	fact[(i-1)]*=j;
	        }
	    }
	    i++;
	}
	for(int j=0;j<t;j++){
	    cout<<fact[j]<<endl;
	}
	return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------

//Small Factorial

//#include <iostream>
//using namespace std;
//
//int main() {
//	int t,n,i=1;
//	cin>>t;
//	long long fact[t];
//	for(int j=0;j<t;j++){
//	    fact[j]=1;
//	}
//	while(i<=t){
//	    cin>>n;
//	    for(int k=1;k<=n;k++){
//	        fact[(i-1)]*=k;
//	    }
//	    i++;
//	}
//	for(int k=0;k<t;k++){
//	    cout<<fact[k]<<endl;
//	}
//	return 0;
//}

