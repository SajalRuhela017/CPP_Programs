//Permutation and Combination

#include<iostream>

using namespace std;

int PER(int,int);
int COM(int,int);

int main(){
	
	char choice;
	
	do{
		
		int n,r,c,ans;
		
		cout<<"*********************Choose the desired option which you want to perform**********************\n\n1.Calculate permutaions\n2.Calculate combinations\n3.Exit\n\n";
		cin>>c;
		
			switch(c){
				
				case 1 :
					
					cout<<"Enter the value of n : ";
					cin>>n;
					cout<<"Enter the value of r : ";
					cin>>r;
					ans = PER(n,r);
					cout<<"\nThe number of permutations are : "<<ans;
					break;
					
				case 2 :
					
					cout<<"Enter the value of n : ";
					cin>>n;
					cout<<"Enter the value of r : ";
					cin>>r;
					ans = COM(n,r);
					cout<<"\nThe number of combitions are : "<<ans;
					break;
					
				case 3 :
					cout<<"Thank You :)";
					exit(0);
					
				default : 
				
					cout<<"\nYou have chosen the wrong option. Try again!!";
			}
			cout<<"\n\nDo you want to calculate for some other values?\nType 'y' for Yes and 'n' for No.\n";
			cin>>choice;
			
	}while(choice=='y' || choice=='Y');
	
	cout<<"Thank You :)";
	
return 0;	
}


int PER(int n,int r){
	
	int fact,fact_n=1,fact_r=1;
	
	for(int i=1;i<=n;i++){
		fact_n*=i;
	}
	for(int j=1;j<=(n-r);j++){
		fact_r*=j;
	}
	
	fact=fact_n/fact_r;
	
	return(fact);
}

int COM(int n,int r){
	
	int fact,fact_n=1,fact_r=1,fact_c=1;
	
	for(int i=1;i<=n;i++){
		fact_n*=i;
	}
	for(int j=1;j<=r;j++){
		fact_r*=j;
	}
	for(int k=1;k<=(n-r);k++){
		fact_c*=k;
	}
	
	fact=fact_n/(fact_r*fact_c);
	
	return(fact);
}
