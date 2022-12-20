//Helping Chef

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	int inp[t];
	for(int i=0;i<t;i++){
		cin>>inp[i];
	}
	for(int i=0;i<t;i++){
		if(inp[i]<10){
			cout<<"Thanks for helping Chef!"<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
