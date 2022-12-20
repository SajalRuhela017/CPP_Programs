//Printing factors of number entered by user.

#include<iostream>

using namespace std;

int main(){
	
	int num;
	char choice;
	
	
	do{
		cout<<"Enter a number for which you want factors : ";
		cin>>num;
		int i=1;
	
		do{
		
			if(num%i==0){
			
			cout<<i<<endl;
			}
		
		i++;
		
		}while(i<=num);			//end of second do
	
	cout<<"Do you want to print factors of other number? Type 'y' for Yes and 'n' for No."<<endl;
	cin>>choice;
	
	}while(choice=='y' or choice=='Y');			//end of first do
	
cout<<"Thank you!";
return 0;
}
