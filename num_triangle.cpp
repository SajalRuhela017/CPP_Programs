//We will print number triangle in this code.

#include<iostream>

using namespace std;

int main(){
	
	int n;
	char choice;
	
	cout<<"Here we will print number triangle.";
	
	do{
		cout<<" \nEnter a number upto 9 to print the triangle : ";
	
		cin>>n;
				
		cout<<endl<<"Here is the triangle of numbers upto "<<n<<endl;
	
	
			for(int i=1;i<=n;i++){
		
				for(int j=1;j<=i;j++){
			
				cout<<j;
				
		
			} 						//end of second for
			cout<<endl;
		} 							//end of first for
		
			cout<<"Do you want to print the triangle again? Type 'y' for Yes and 'n' for No.";
			cin>>choice;

	} //end of do loop
	
	while(choice=='y' or choice=='Y');

return 0;}

