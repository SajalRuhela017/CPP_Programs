#include<iostream>

using namespace std;

int main(){
	int n,min,steps=0,count=0;
	cin>>n;
	int A[n];
	int B[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int j=0;j<n;j++){
		cin>>B[j];
	}
	min=A[0];
	for(int k=1;k<n;k++){
		if(A[k]<min){
			min=A[k];
		}
	}
	for(int i=0;i<n;i++){
		while(A[i]>min){
			A[i]-=B[i];
			steps++;
			}
		}
	for(int i=0;i<n-1;i++){
		if(A[i]==A[i+1]){
			count++;
		}
	}
	if(count==n-1){
		cout<<steps;
	}else{
		cout<<"-1";
	}
	return 0;	
}
