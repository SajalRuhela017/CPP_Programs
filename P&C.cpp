//This program is made to calculate permutations and combinations.

#include<iostream>

using namespace std;

int main(){
	
	char choice;
	
	do{
	
		int n,p,r,selection,ans;
		double fact_n=1,fact_r=1,fact_c=1;
		
		
			cout<<"Please press 1 to calculate Permuation and press 2 to calculate Combinations."<<endl;
			cin>>selection;
			
				if(selection==1){
					
					cout<<"\nEnter the value of n : ";
					cin>>n;
					cout<<"\nEnter the value of r : ";
					cin>>r;
					r=n-r;
					
						for(int i=1;i<=n;i++){
							fact_n*=i;
						}
						for(int j=1;j<=r;j++){
							fact_r*=j;
						}
					ans=fact_n/fact_r;
					cout<<"\nThe value of this permutation is : "<<ans<<endl;
				}
				
				if(selection==2){
					
					cout<<"\nEnter the value of n : ";
					cin>>n;
					cout<<"\nEnter the value of r : ";
					cin>>r;
					
						for(int i=1;i<=n;i++){
							fact_n*=i;
						}
						for(int j=1;j<=r;j++){
							fact_r*=j;
						}
						for(int k=1;k<=(n-r);k++){
							fact_c*=k;
						}
					ans=fact_n/(fact_r*fact_c);
					cout<<"\nThe value of this combination is : "<<ans<<endl;	
				}
				
				if(selection!=1 && selection!=2){
					
					cout<<"Invalid option."<<endl;
					break;
				}
			
		cout<<"Do want to calculate it for some other values? \nPress 'y' to Proceed and 'n' to Exit."<<endl;
		cin>>choice;
				
	}while(choice=='y' || choice=='Y');
	
	cout<<"Thank you!";
	
return 0;
}

