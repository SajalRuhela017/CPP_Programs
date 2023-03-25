#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char S[100];
	int count=0,x;
	cin>>S;
	x=strlen(S);
	for(int i=0;i<x;i++){
		if(S[i]==S[x-i-1]){
			count++;
		}
	}
	if(count==x){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
