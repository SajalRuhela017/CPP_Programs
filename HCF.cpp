//Program for printing HCF.

#include<iostream>

using namespace std;

int main(){
	
	int a,b,HCF;
	char choice;
	
	do {
	
		cout<<"Enter pair of numbers of which you want to find HCF."<<endl;
		cin>>a>>b;
		int i=1;
		
			do{
				if(a%i==0 && b%i==0){
					HCF=i;
				}
				i++;
			}while(i<=a);
			
		cout<<HCF<<endl<<endl;
			
		cout<<"Do want to check for anather pair of numbers? Type'y' for Yes and 'n' for No."<<endl;
		cin>>choice;
					
	}while(choice=='y' || choice=='Y');
	
	cout<<"Thank You!";
	
return 0;
}
