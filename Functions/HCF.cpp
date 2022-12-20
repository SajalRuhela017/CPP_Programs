//Print HCF or GCD using Functions.

#include<iostream>

using namespace std;

int HCF(int,int);

int main(){
	
	char c;
	do{
		int m,n;
		cout<<"Enter number of which you calculate HCF or GCD - \n";
		cin>>m>>n;
		HCF(m,n);
		cout<<"\nDo you want to find HCF or GCD for some other values? Type 'y' to Proceed and 'n' to Exit\n";
		cin>>c;
	}while(c=='y' || c=='Y');
	cout<<"\nThank You!!!";
	return 0;
}

int HCF(int m, int n){
	int hcf;
	for(int i=1;i<=m;i++){
		if(n%i==0 && m%i==0){
			hcf=i;
		}else{
			continue;
		}
	}
	cout<<"The HCF or GCD of the numbers "<<m<<" and "<<n<<" is "<<hcf<<".";
	return 0;
}
