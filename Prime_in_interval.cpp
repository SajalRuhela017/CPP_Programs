//Here we will find prime numbers which are between a interval of two numbers entered by user.

#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,i,j,dom=1;
	
	cout<<"Enter any interval between which you want to find the prime numbers :"<<endl;
	cin>>a>>b;
		if(a==1){
			a+=1;
		}
		for(i=a;i<=b;i++){
			c=i/2;
			dom=1;
				for(j=2;j<=c;j++){
					if(i%j==0){
						dom=0;
						break;
					}		
				}
			if(dom==1){
				cout<<"The number "<<i<<" is prime."<<endl;
			}
	
		}
		
	 return 0;
}
