#include<iostream>
 
using namespace std;
 
int main(){
 
	long long N,answer=1;
	cin>>N;
	int array[N];
	for(int i=0;i<N;i++){
		cin>>array[i];
	}
	for(int i=0;i<N;i++){
		answer=(answer*array[i])%(1000000007);
	}
	cout<<answer;
	return 0;
}
