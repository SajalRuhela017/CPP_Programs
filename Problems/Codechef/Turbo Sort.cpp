//Turbo Sort

#include <iostream>
using namespace std;

int main(){
	
	int t,a,b;
	cin>>t;
	int num[t];
	for(int i=0;i<t;i++){
	    cin>>num[i];
	}
	for(int i=0;i<t;i++){
	    for(int j=i+1;j<t;j++){
	        if(num[i]>num[j]){
	            a=num[i];
	            num[i]=num[j];
	            num[j]=a;
	        }
	    }
	}
	for(int i=0;i<t;i++){
	    cout<<num[i]<<endl;
	}
	return 0;
}

