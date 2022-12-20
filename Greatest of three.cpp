#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	cout<<"Enter three numbers \n";
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"a is greatest";
		}else{
			cout<<"c is greatest";
		}
	}else if(b>a){
		if(b>c){
			cout<<"b is greatest";
		}else{
			cout<<"c is greatest";
		}
	}else{
		cout<<"c is greatest";
	}
	return 0;
}
